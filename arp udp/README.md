# ARP Implementation using UDP

## Date:

[Enter Date]

## Aim:

The goal of this program is to implement the Address Resolution Protocol (ARP) to obtain the corresponding hardware address for a given IP address. The program is designed for a single host scenario, where the IP address of any client in the network is provided as input, and the corresponding hardware address is retrieved as the output.

## Technical Objective:

The program achieves the following technical objectives:

1. **ARP Implementation:** Implements the Address Resolution Protocol (ARP) to resolve the hardware address based on the provided IP address.

2. **User Input:** Takes the IP address of a client in the network as user input.

3. **Ping Test:** Before compiling, the program pings the client to ensure network connectivity and responsiveness.

4. **ARP Cache Lookup:** Looks up the ARP cache for the corresponding hardware address.

5. **Output:** Displays the retrieved hardware address for the specified IP.

## Implementation:

The program utilizes UDP for communication and ARP for address resolution. It first pings the specified client to confirm network connectivity. Then, it sends an ARP request to the network, looks up the ARP cache for the hardware address, and displays the result.

## Code:

```c
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdlib.h>

int main() {
    // Code implementation goes here
    // ...

    return 0;
}
