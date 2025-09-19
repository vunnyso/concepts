<h1 style="text-align:center;"> Go Packages and imports </p>

### Package

- It can be project or workspace.
- Collection of common source code files.

### Types of packages

1. Executable
   - Generates a file that we can run
   - Only generated when we use `package main` in the file.
2. Reusable
   - Code used as helpers.
   - Good place to put reusable or dependency logic.

### Imports

- We use import statement to gain access to another package inside the one we are authoring.
- Example `import "fmt"` is standard library of GO used for logging.

All go packages will be listed here https://pkg.go.dev/std
