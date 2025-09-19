<h1 style="text-align:center;"> GTK App  </p>

### Installation of gtk4

If you are working in Nix tehn need below packages

```nix
{ pkgs ? import <nixpkgs> {} }:
pkgs.mkShell  {
    buildInputs = [
        pkgs.gtk4
        pkgs.pkg-config
    ];
}
```

### Add dependencies in your `Cargo.toml`

```toml
[dependencies]
gtk = { version = "0.10", package = "gtk4" }
glib = "0.20"
```

### Rust Code for app

```rust
use gtk::prelude::*;
use gtk::{Application, ApplicationWindow, Button};

fn main() {
    let app = Application::builder()
    .application_id("com.example.hello")
    .build();

    app.connect_activate(|app| {
        let window = ApplicationWindow::builder()
        .application(app)
        .title("Hello GTK")
        .default_width(300)
        .default_height(300)
        .build();

        let button = Button::with_label("Click Me!");
        button.connect_clicked(|_| {
            println!("Button Clicked");
        });

        window.set_child(Some(&button));
        window.show();

    });
    app.run();
}
```
