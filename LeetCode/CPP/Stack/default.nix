let
  pkgs = import <nixpkgs> {};
in
  pkgs.stdenv.mkDerivation {
    pname = "ParenthesesValidator";
    version = "1.0";

    src = ./.;

    nativeBuildInputs = [ pkgs.cmake pkgs.gcc pkgs.gtest ];

    # Pass BUILD_TESTING to CMake so tests are enabled
    cmakeFlags = [ "-DBUILD_TESTING=ON" ];

    buildPhase = ''
      mkdir -p build
    cd build

    # Run CMake to configure the project
    cmake ..

    # Build the project
    make

    '';

    checkPhase = ''
      cd build
      ctest --output-on-failure
    '';

    installPhase = ''
      mkdir -p $out/bin
      cp build/runTests $out/bin/
    '';

    meta = with pkgs.lib; {
      description = "Validate parentheses using Google Test";
      license = licenses.mit;
    };
  }
