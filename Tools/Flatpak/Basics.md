<h1 style="text-align:center;"> Flatpak </p>

### Overview

- Flatpak is a system for building, distributing, and running sandboxed desktop applications on Linux.
  -Its universal package

### Features

1. Sandboxing: Flatpak apps run in a sandboxed environment, meaning they are isolated from the rest of the system for security and stability. This makes it harder for apps to interfere with each other or your system.

2. Cross-distribution: Unlike traditional package formats (like .deb or .rpm), Flatpak apps are distribution-agnostic. This means an app packaged as a Flatpak can be installed on nearly any Linux distribution, provided that Flatpak is supported.

3. Dependencies: Flatpak apps include all the libraries and dependencies they need to run, which ensures the app will work on any system, even if the system doesn't have those libraries installed.

4. App Updates: Flatpak provides a consistent way to handle updates for apps, which makes keeping software up-to-date easier.

5. Centralized Repositories: Flatpak apps are usually hosted in repositories like Flathub, which is the most popular source for Flatpak apps. Flathub offers thousands of applications, making it easy to find and install software.

6. Versioning and Portability: Because Flatpak bundles the dependencies, it helps avoid "dependency hell," which is a common problem when different apps require different versions of libraries that might not be compatible with each other.

### Installation

- Can be installed user or system wide
- System mode is by default

### Usage

```bash
$ flatpak search firefox
$ flatpak install flathub org.mozilla.firefox
$ flatpak --user install flathub org.mozilla.firefox
$ flatpak uninstall org.mozilla.firefox
$ flatpake update
$ flatpak uninstall --unsed // Delete unsed runtimes
```

### Reference

https://flatpak.org/setup/
