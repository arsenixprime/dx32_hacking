// Export the full disassembly listing (address, bytes, instruction) to a text file.
// Ghidra's 68881/68882 support is far better than rizin/capstone for this firmware.
// Usage: -postScript ExportListing.java <output_file>
//@category Export
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.Symbol;
import java.io.FileWriter;
import java.io.PrintWriter;

public class ExportListing extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        PrintWriter out = new PrintWriter(new FileWriter(args[0]));
        Listing listing = currentProgram.getListing();
        InstructionIterator it = listing.getInstructions(true);
        int n = 0;
        while (it.hasNext()) {
            Instruction ins = it.next();
            Function f = listing.getFunctionAt(ins.getAddress());
            if (f != null) out.println("\n// Function: " + f.getName() + " @ " + ins.getAddress());
            Symbol s = currentProgram.getSymbolTable().getPrimarySymbol(ins.getAddress());
            if (s != null && f == null) out.println(s.getName() + ":");
            StringBuilder hex = new StringBuilder();
            for (byte b : ins.getBytes()) hex.append(String.format("%02x", b));
            out.printf("%s  %-20s %s%n", ins.getAddress(), hex, ins.toString());
            n++;
        }
        out.close();
        println("Exported " + n + " instructions to " + args[0]);
    }
}
