# Exit on any error
set -e

# Create the build directory
mkdir -p build
cd build

# Run CMake to configure the project
cmake ..

# Build the project
make

