<h1 style="text-align:center;">  Understanding Proto File </p>

### Proto File
* A .proto file (short for Protocol Buffers file) is used to define the structure of messages and services in gRPC and Protocol Buffers (protobuf).
* It's a kind of Interface Definition Language (IDL) that describes:
    * What data your application sends and receives.
    * What remote procedures (functions) are available.
    * How those procedures are structured (inputs/outputs).

### 📄 What’s Inside a .proto File?
A .proto file contains:

1. Message definitions : Describe the structure of data.
2. Service definitions : Describe available RPC methods.

### 🧱 Example .proto File
```protobuf
syntax = "proto3"; // Specifies the version of Protocol Buffers

option go_package = "./"; // Path where to generate code 

// Define the message structure for requests
message HelloRequest {
  string name = 1;
}

message HelloReply {
  string message = 1;
}

// Define a grpc service with one RPC method
service Greeter {
   // Declares a remote function that takes HelloRequest and returns HelloReply
  rpc SayHello (HelloRequest) returns (HelloReply);
}
```

### 🛠️ What Happens After You Write a .proto File?
* You use the Protocol Buffer compiler (protoc) to generate code in your target language:
* Make sure you have protoc, protoc-gen-go and protoc-gen-go-grpc for `GO`

```bash
protoc --python_out=. --python-grpc_out=. yourfile.proto
protoc --go_out=. --go-grpc_out=. yourfile.proto
```
This command will:
* Generate classes for messages.
* Generate client and server code for RPC services.
* File ending with .pb.go will be model files.
* File ending with .grpc.pb.go will have have service code.

### ✅ Benefits of Using .proto Files
* Cross-language compatibility: Generate code in many languages (Python, Go, Java, C++, etc.).
* Efficiency: Data is serialized in a compact, binary format.
* Consistency: Enforces a shared schema for communication.