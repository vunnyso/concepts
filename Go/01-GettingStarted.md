<h1 style="text-align:center;">  Getting started with GO </p>

### Overview
* Go also called Golang or Go language, is an Open Source programming language that Google developed.
* Software developers use Go in an array of operating systems and frameworks to develop web applications, cloud and networking services, and other types of software.

### Features
* A standard library is based on the use of distributed packages and makes it easy to add and use additional functionality in code.
* Code package management allows for the management of user-created and external code packages, and enables publishing packages using a small set of commands.
* Static typing provides a type system that ensures conversions and compatibility while avoiding issues that come with dynamically typed languages.
* Support for testing includes unit tests that run in parallel with written code and allow for debugging and quality assurance.
* Platform independence takes advantage of Go's modular design to let its code be compiled on almost any platform.

### Installation
```bash
sudo apt install golang-go
go version
```


### ✅ Basic Compilation

Create sample program
```go
package main

import "fmt"

func main() {
  fmt.Println("Hello Go!")
}
```

🔹 Compile and Run in One Step
```bash
go run main.go
```

### Initalize Go Project
```bash
mkdir pro
cd pro
go mod init pro
go install github.com/jochenvg/go-udev@latest
go run main.go
```


### Pull Go Project
```bash
go get [project-url]

go get github.com/gvalkov/golang-evdev
```
