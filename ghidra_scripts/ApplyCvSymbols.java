// Apply CodeView symbols from a CSV (addr,kind,name) and fix __chkstk noreturn
// Usage: -postScript ApplyCvSymbols.java <csv>
//@category Symbols
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;
import java.io.BufferedReader;
import java.io.FileReader;

public class ApplyCvSymbols extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        BufferedReader r = new BufferedReader(new FileReader(args[0]));
        String line; int n = 0, nf = 0;
        while ((line = r.readLine()) != null) {
            String[] p = line.trim().split(",");
            if (p.length < 3) continue;
            Address a;
            try { a = currentProgram.getAddressFactory().getAddress(p[0]); } catch (Exception e) { continue; }
            if (a == null) continue;
            String kind = p[1], name = p[2];
            try {
                if (kind.endsWith("proc")) {
                    Function f = getFunctionAt(a);
                    if (f == null) f = createFunction(a, name);
                    if (f != null) { f.setName(name, SourceType.IMPORTED); nf++; }
                    else createLabel(a, name, true, SourceType.IMPORTED);
                } else {
                    createLabel(a, name, true, SourceType.IMPORTED);
                }
                n++;
            } catch (Exception e) { printerr("skip " + line + ": " + e); }
        }
        r.close();
        int fixed = 0;
        for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
            String nm = f.getName();
            if (nm.toLowerCase().contains("chkstk")) {
                f.setNoReturn(false); fixed++;
            }
        }
        println("Applied " + n + " symbols (" + nf + " functions), fixed noreturn on " + fixed);
    }
}
