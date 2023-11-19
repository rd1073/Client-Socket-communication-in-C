# UDP Echo Client-Server Communication

This simple C program demonstrates UDP communication between a client and a server, implementing an echo functionality. The client sends a message to the server, the server receives and prints the message, then echoes it back to the client.

## Getting Started

### Prerequisites
- This program is written in C, so you need a C compiler installed on your system (e.g., GCC).
- The code uses sockets, so make sure your system supports socket programming.

### Compilation
Compile the client and server programs separately using a C compiler.

```bash
gcc client.c 
./a.out
gcc server.c 
./a.out

Code Explanation
client.c
Creates a UDP socket.
Configures the server address.
Accepts a message from the user, sends it to the server, and waits for a response.
server.c
Creates a UDP socket.
Binds the socket to a specific port.
Receives messages from clients, prints them, and echoes them back.
