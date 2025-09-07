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

## nix-env
Is a command-line tool in the Nix package manager used to install, upgrade, remove, and query packages in a user's environment.

List all packages currently installed in your user environment.
```sudo nix-env -q
```

To install the package
```bash
sudo nix-env -iA nixpkgs.hello
```

To Uninstall the package
```bash
sudo nix-env -e hello
```

Upgrade all installed packages.
```bash
nix-env -u
```

### Find hash of commit
* For finding sha256 hash
nix-prefetch-github pop-os cosmic-comp  --rev 3f74a22cca982de708a4ce2138009ec0b4756cd9

* For finding cargo hash
nix-prefetch cargo \
  --lockfile ./Cargo.lock \
  --output-format nix