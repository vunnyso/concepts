<h1 style="text-align:center;"> Things to do on First Install of NixOS</p>

## Follow below steps

1. Enable networking so that user can ssh remotely to the system.
    ```
    nano /etc/nixos/configuration.nix

    # Enable the OpenSSH daemon.
    services.openssh.enable = true;

    sudo nixos-rebuild switch
    ```

2. Enable `nix flake`
   ```nix
   nix.extraOptions = ''
     experimental-features = nix-command flakes
   '';


   sudo nixos-rebuild switch
   ```

3. Start using `nix flake`
   ```nix
   mkdir ~/dotfiles
   cd ~/dofiles
   cp /etc/nixos/* .
   nix flake init
   ```
   #### Note you can keep dotfiles with scm like `git`


4. Modify `flake.nix` generated in step 3
   ```nix
    {
      description = "A very basic flake";
      inputs = {
        nixpkgs.url = "github:nixos/nixpkgs?ref=nixos-unstable";
      };

      outputs = { self, nixpkgs }:

      let
      system = "x86_64-linux";
      inherit (nixpkgs.lib) nixosSystem;
      nixpkgsArgs = {
        inherit system;
        config.allowUnfree = true;
      };
    in
    {
      nixosConfigurations.nixos = nixpkgs.lib.nixosSystem {
        inherit system;
        specialArgs = { inherit system nixpkgs; };
        modules = [( {pkgs, ...}: {   })
        ./hardware-configuration.nix
        ./configuration.nix
        ];
      };
     };
    }

    # After which
    sudo nixos-rebuild switch --flake .
   ```