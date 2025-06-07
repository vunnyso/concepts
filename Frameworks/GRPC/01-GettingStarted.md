<h1 style="text-align:center;">  GRPC </p>

### RPC
* Before starting GRPC lets learn RPC.
* RPC stands for Remote Procedure Call. 
* It’s a concept in computer science that allows a program to execute a function or procedure on another computer (or server) as if it were a local function call.

## 🧠 How It Works:
1. Client calls a "stub" function locally.

2. The stub handles:
    * Packaging the request (called marshalling).
    * Sending it over the network to the server.

3. Server receives the request:
    * Unpacks it (unmarshalling).
    * Runs the actual function.
    * Sends back the result.

4. The client stub receives the response and returns it to the caller.

### 🔄 Variants of RPC:
* gRPC: Modern, efficient, uses HTTP/2 and Protocol Buffers.
* JSON-RPC: Lightweight, uses JSON over HTTP.
* XML-RPC: Older, uses XML over HTTP.

### GRPC
* gRPC is an RPC (Remote Procedure Call) framework initially developed by Google, currently open-sourced. 
* In every release, “g” stands for something 😀. For example: giggle, galactic, gravity and so on. Check this [link](https://github.com/grpc/grpc/blob/master/doc/g_stands_for.md).
* gRPC is based on HTTP2 and uses protocol buffers for message exchange that makes it quite convenient and performant.
* gRPC supports most of the modern programming languages such as Java, Python, C++, Golang

