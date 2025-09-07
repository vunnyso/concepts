<h1 style="text-align:center;"> Scripts in Nix</p>

## Usuage
* In Nix, both writeShellScriptBin and writeShellApplication are used to create shell scripts, but they serve slightly different purposes and have different behaviors.

| Feature | writeShellScriptBin | writeShellApplication |
| ------- | ------------------- | --------------------- |
| Output location |  $out/bin/your-script | $out/bin/your-script |
| Dependency handling | Manual (relies on global PATH) | Automatic via runtimeInputs|
| Ease of use | Simpler | More structured with dependency resolution|
| Best for | Quick scripts with no extra dependencies | Scripts needing specific dependencies|