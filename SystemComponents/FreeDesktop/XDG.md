<h1 style="text-align:center;"> XDG </p>

### XDG (X Desktop Group)

- X Desktop Group, a working group under freedesktop.org that develops and maintains a set of standards to improve interoperability and consistency across different Linux and Unix-like desktop environments and applications.

### Key XDG Specifications

1. **XDG Base Directory Specification:**
   - This defines the standard directories where user and system data should be stored. For example:
     - ~/.config/ for user configuration files.
     - ~/.local/share/ for user application data.
     - /usr/share/ for system-wide shared data.

2. **XDG MIME Types:**
   - Defines how to categorize and handle different file types (e.g., .jpg, .txt, .html) across desktop environments.

3. **XDG Desktop Entry Specification:**
   - Defines how application desktop entry files (\*.desktop files) should be structured. These files are used to create application launchers for desktop environments.

### XDG Portals

- XDG Portals are a set of APIs and frameworks designed to allow sandboxed applications (like those running in flatpak, snap, or other containerized environments) to interact with the underlying system in a secure and controlled way, while still respecting user privacy and security.

### Why XDG Portals Exist

- Containerized or sandboxed applications typically run in an isolated environment to minimize the risk of security vulnerabilities.

#### Key Types of XDG Portals

Here are some common types of XDG Portals that provide access to system resources:

1. **FileChooser Portal:**
   - Allows sandboxed applications to open or save files by interacting with the system's file chooser dialogs.
   - Ensures that the application can only access files and directories that the user explicitly selects.

2. **URL Portal:**
   - Used to open a URL in a default web browser or handle URLs in a sandboxed environment.

3. **OpenURI Portal:**
   - This allows sandboxed apps to open system URIs (such as mailto: or ftp:) without direct access to the underlying system.

4. **Print Portal:**
   - Allows sandboxed applications to interact with printers in a controlled way. The application asks for permission to print, and the user can approve or deny the request.

5. **Screenshot Portal:**
   - Grants the sandboxed application permission to capture a screenshot or screen recording, but only with the user's explicit consent.

6. **Camera and Microphone Portals:**
   - Sandboxed applications can request access to the camera or microphone using XDG Portals, but the user must approve the request through a system dialog. This prevents unwanted or background access.

### References:

https://specifications.freedesktop.org/basedir-spec/latest/
https://flatpak.github.io/xdg-desktop-portal/
