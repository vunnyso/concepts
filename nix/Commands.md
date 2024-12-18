<h1 style="text-align:center;"> Useful Commands</p> 

## nix run
Runs a packaged binary
Looks for outputs.packages."SYSTEM".default

## nix build
Builds a package
Looks for outputs.packages."SYSTEM".default

## nix develop
Activates a dev shell
Looks for outputs.devShells."SYSTEM".default

## nixos-rebuild
Builds a nixos system
Looks for outputs.nixosConfigurations."HOSTNAME"

## home-manager
Builds a home configuration
Looks for outputs.homeConfigurations."USERNAME"