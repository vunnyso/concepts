<h1 style="text-align:center;"> Enabling IPU 6 camera on NixOS Gen 11</p>

## Follow below steps

1. Enable following configuration
   ```nix
   hardware.ipu6.enable = true;
   hardware.ipu6.platform = "ipu6ep";
   ```

2. To make IPU camera work we may need to pin to specific kernel version, in my last testing on 9-Feb-2025
   ```nix
   boot.kernelPackages =
      (pkgs.linuxPackagesFor
      (pkgs.linux_6_12.override {
        argsOverride = rec {
          src = pkgs.fetchurl {
            url = "mirror://kernel/linux/kernel/v6.x/linux-${version}.tar.xz";
            sha256 = "sha256-AZOx2G3TcuyJG655n22iDe7xb8GZ8wCApOqd6M7wxhk=";
          };
          version = "6.12.1";
          modDirVersion = "6.12.1";
        };
      })).extend (_: _: {
        ipu6-drivers = config.boot.kernelPackages.callPackage ./ipudrivers.nix {};
      });
   ```

## Debug steps
1. Check ipu6 servcie
   ```
   journalctl -efu v4l2-relayd-ipu6.service
   ```

#### Note: Tested for Intel MIPI camera on AlderLake platform, configuration may change accordingly.

### References:
https://github.com/NixOS/nixpkgs/issues/225743#issuecomment-2567605171