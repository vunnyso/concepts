<h1 style="text-align:center;"> Kernel Debugging</p>

#### i915 Driver debugging

```nix
boot.kernelPatches = [
    {
    name = "gpu-passthrough-fix";
    patch = ./0001-Disable-suspending.patch;
    structuredExtraConfig = with lib.kernel; {
        DRM_I915_SELFTEST = yes;
        DRM_I915_DEBUG_GUC = yes;
        DRM_I915_DEBUG = yes;
        DRM_I915_DEBUG_RUNTIME_PM = yes;
      };
    }
];
```

### Use custom Kernel

```nix
boot.kernelPackages =
    let
    linux_pkg =
        { fetchgit, buildLinux, ... }@args:

        buildLinux (
        args
        // rec {
            version = "6.17.0-rc6";

            src = fetchgit {
            url = "https://anongit.freedesktop.org/git/drm-tip.git/";
            rev = "e9c137c33746d8007daa202af67b6aefd18a0121";
            sha256 = "sha256-tNPtVfzvrWKkBy43445zfo/te2FPDkaf1Wuj/3xZ3BI=";
            };
        # structuredExtraConfig = with lib.kernel; {
        #   NF_CT_PROTO_DCCP = lib.mkForce no;
        # };
        ignoreConfigErrors = true;
        }
        // (args.argsOverride or { })

        );
    linux_6-17-0 = pkgs.callPackage linux_pkg { };
    in
    pkgs.recurseIntoAttrs (pkgs.linuxPackagesFor linux_6-17-0);
```
