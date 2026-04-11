// Export all decompiled functions to a single C file
// Usage: analyzeHeadless ... -postScript ExportAllDecompiled.java <output_file>
//@category Export

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Program;
import ghidra.program.model.mem.MemoryBlock;

import java.io.FileWriter;
import java.io.PrintWriter;

public class ExportAllDecompiled extends GhidraScript {

    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            printerr("Usage: ExportAllDecompiled.java <output_file>");
            return;
        }
        String outputPath = args[0];

        Program program = currentProgram;
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(program);

        PrintWriter out = new PrintWriter(new FileWriter(outputPath));

        // Write header with memory map info
        out.println("// Decompiled: " + program.getName());
        out.println("// Processor: " + program.getLanguage().getProcessor());
        out.println("// Language: " + program.getLanguageID());
        out.println("//");
        out.println("// Memory Map:");
        for (MemoryBlock block : program.getMemory().getBlocks()) {
            out.printf("//   %-20s %s - %s  [%s%s%s] %s%n",
                block.getName(),
                block.getStart(),
                block.getEnd(),
                block.isRead() ? "R" : "-",
                block.isWrite() ? "W" : "-",
                block.isExecute() ? "X" : "-",
                block.isInitialized() ? "initialized" : "uninitialized");
        }
        out.println();

        // Export all functions
        FunctionIterator functions = program.getFunctionManager().getFunctions(true);
        int count = 0;
        while (functions.hasNext()) {
            Function func = functions.next();
            DecompileResults results = decompiler.decompileFunction(func, 30, monitor);
            if (results.decompileCompleted()) {
                String decompiledC = results.getDecompiledFunction().getC();
                out.println("// Function: " + func.getName() + " @ " + func.getEntryPoint());
                out.println(decompiledC);
                out.println();
            } else {
                out.println("// FAILED to decompile: " + func.getName() + " @ " + func.getEntryPoint());
                out.println();
            }
            count++;
            if (count % 50 == 0) {
                println("Exported " + count + " functions...");
            }
        }

        out.close();
        decompiler.dispose();
        println("Exported " + count + " functions to " + outputPath);
    }
}
