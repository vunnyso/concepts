<h1 style="text-align:center;"> Nix Basics</p>

## Nix

- Nix is a cross-platform package manager and build tool that allows you to manage software packages and their dependencies in a declarative way.
- It was created by Eelco Dolstra in 2003
- Software packages are installed into unique directories with immutable contents
- Reproducibility means its ability to reliably recreate the exact same software environment or system state across different machines or at different time.
- You can always roll back to a previous environment configuration because every version is uniquely stored.

## NixOS

- NixOS is a a free and open source Linux-based operating system built on top of the Nix package manager.
- It is unique because it manages the entire system—packages, configuration files, services, and even the kernel—using a declarative approach.

## Nix language

- The language you use to define Nix package builds, development environments, NixOS configurations, and more.
- Nix is a pure, functional, lazy, declarative, and reproducible programming language.

## Nixpkgs

- A collection of tens of thousands of Nix packages and NixOS modules.

## Nix-channel

- A Nix channel is a mechanism used by the **legacy** Nix CLI to keep Nixpkgs up to date. In the new Nix CLI, channels have been replaced by **flakes**
- A channel is a URL that points to some Nix code, such as https://nixos.org/channels/nixos-unstable
- Common nix-channel commands

| Description              | Command                                                           |
| :----------------------- | :---------------------------------------------------------------- |
| Listing current channels | `nix-channel --list`                                              |
| Adding new channel       | `nix-channel --add https://nixos.org/channels/channel-name nixos` |
| Updating channel         | `nix-channel --update`                                            |
| Remove channel           | `	nix-channel --remove channel-alias`                              |

## Nix-shell

- Nix-shell is a command-line tool provided by the Nix package manager.
- With nix-shell, you can define a shell environment using a Nix expression, which specifies the dependencies required for your project.

**Example** Create `shell.nix` file with below content

```nix
with (import <nixpkgs> {});
mkShell {
buildInputs = [
    pkgs.neovim
    pkgs.vim
 ];
 shellHook = ''
   echo "Hello World!"
 '';
}
```

After which run

```
$ nix-shell
```

Going to have neovim, vim packages installed and shellHook will be run as soon as it starts.

**Advantages**

- When you run nix-shell, it creates a temporary environment that includes all the dependencies specified in the expression, without affecting the host system.
- Useful in development when we need different environment for differnt projects.
- It allows users to create isolated, reproducible, and declarative environments for development, testing, and deployment.

**Drawbacks**

- `import <nixpkgs>` It will use system current channel version to grab of the packages and channel need to be updated imperatively.
- If channels are pointing to different channel user may end up in having different version of same package.
- If channel is updated it might break the project.

## Nix Flakes

- Used for managing nix ecosystem including nixos configuration, development environment, derivations and other.
- Flakes are nix command are experimental feature of Nix.
- Need to explicity enable them on NixOS.
- Pins versions of dependencies in a lock file.

```
nix.settings.experimental-features = ["nix-command" "flakes"]
```

## Getting started with Nix Flakes

Run below command in empty directory

```
$ nix flake init
```

After Running above command you will get `flake.nix` file with following contents

Example 1:

```nix
{
  description = "A very basic flake";

  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs?ref=nixos-unstable";
  };

  outputs = { self, nixpkgs }: {

    packages.x86_64-linux.hello = nixpkgs.legacyPackages.x86_64-linux.hello;

    packages.x86_64-linux.default = self.packages.x86_64-linux.hello;

  };
}
```

After which can execute below command

```
nix run
```

Output 1

```
warning: creating lock file '/home/test/flake-check/flake.lock'
Hello, world!
```

Example 2:

```nix
{
  description = "Customized dev shell using flakes";

  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs?ref=nixos-unstable";
  };

  outputs = { self, nixpkgs }:
  let
    system = "x86_64-linux";
    pkgs = nixpkgs.legacyPackages.${system};
   in
   {
    devShells.${system}.default =
      pkgs.mkShell
      {
        buildInputs = [
          pkgs.neovim
          pkgs.vim
        ];

      shellHook = ''
        echo "Hello World!"
      '';
     };
  };
}
```

Execute below command to create developemnt shell

```
nix develop
```

Output 2:

```
Hello World!
```

## How to update packages using Nix Flake

```
nix flake update
```
