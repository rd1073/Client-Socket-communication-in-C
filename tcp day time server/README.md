# Concurrent TCP/IP Day Time Server and Client

## Aim
Implement a TCP/IP day time server (concurrent server) that handles multiple client requests. The client requests the date and time from the server, and the server sends its day-time details to the client.

## Technical Objective
- Implement a concurrent server that can handle multiple client connections.
- The server responds to client requests by sending its day-time details.
- The client establishes a connection with the server, receives the date and time, and prints it in the console.

## Files
- `server.c`: Source code for the concurrent day time server.
- `client.c`: Source code for the client that requests and prints the date and time.
  
## Compilation
Compile the server and client programs separately using a C compiler.

For the server:
```bash
gcc server.c -o server
