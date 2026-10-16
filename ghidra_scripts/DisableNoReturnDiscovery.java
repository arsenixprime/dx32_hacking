// Pre-script: stop Ghidra from flagging stack-check helpers (__chkstk) as non-returning,
// which truncates every MSC-compiled function body in the DOS executables.
//@category Analysis
import ghidra.app.script.GhidraScript;
public class DisableNoReturnDiscovery extends GhidraScript {
    @Override
    protected void run() throws Exception {
        setAnalysisOption(currentProgram, "Non-Returning Functions - Discovered", "false");
        println("Disabled Non-Returning Functions - Discovered");
    }
}
