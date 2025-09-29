<h1 style="text-align:center;"> Dev Shells in Nix </p>

### Example

```nix
{
  description = "My Nix Shell";

  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs?ref=nixos-unstable";
    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, nixpkgs, flake-utils }:

    flake-utils.lib.eachDefaultSystem (system:
    let
      pkgs = import nixpkgs {
        inherit system;
      };
      in {
        devShells.default = pkgs.mkShell {
          name = "my-dev-shell";
          buildInputs = [
            pkgs.hello
            pkgs.git
          ];
          shellHook = ''
          echo "Welcome to dev shell!"
          '';
        };
      }
    );
}
```
