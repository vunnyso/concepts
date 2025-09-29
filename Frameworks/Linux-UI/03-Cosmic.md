<h1 style="text-align:center;"> Cosmic </p>

### Overview

- Its System76’s desktop environment.
- COSMIC Desktop Environment (originally an acronym: Computer Operating System Main Interface Components).
- Creator: System76, the company behind Pop!\_OS.
- Runs natively on Wayland (not X11).

### Frameworks / Libraries it uses

- Rust → the programming language everything is written in.
- Iced → GUI toolkit in Rust provides widgets, UI rendering (somewhat like Flutter/React)
- Smithay → Rust library for building Wayland compositors.
- Winit / wgpu → for handling input and GPU rendering.

### COSMIC’s own components

System76 is writing their own Rust crates (libraries), like:

- cosmic-panel → top bar/panel.
- cosmic-launcher → application launcher.
- cosmic-applet → system tray/applets. --> https://github.com/pop-os/cosmic-applets
- cosmic-settings → control center.
- cosmic-workspaces → workspace & tiling logic.
- cosmic-comp → compositor / window manager part.
