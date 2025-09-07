<h1 style="text-align:center;"> Nix Packages</p>

## Packages location
* All nix package are located https://search.nixos.org/packages

## How to add puthon package
```nix
environment.systemPackages = [
    (pkgs.python312.withPackages (ps: with ps;[evdev requests]))
];
```
