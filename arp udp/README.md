Aim:
The goal of this program is to implement the Address Resolution Protocol (ARP) to obtain the corresponding hardware address for a given IP address. The program is designed for a single host scenario, where the IP address of any client in the network is provided as input, and the corresponding hardware address is retrieved as the output.

Technical Objective:
The program achieves the following technical objectives:

ARP Implementation: Implements the Address Resolution Protocol (ARP) to resolve the hardware address based on the provided IP address.

User Input: Takes the IP address of a client in the network as user input.

Ping Test: Before compiling, the program pings the client to ensure network connectivity and responsiveness.

ARP Cache Lookup: Looks up the ARP cache for the corresponding hardware address.

Output: Displays the retrieved hardware address for the specified IP.

Implementation:
The program utilizes UDP for communication and ARP for address resolution. It first pings the specified client to confirm network connectivity. Then, it sends an ARP request to the network, looks up the ARP cache for the hardware address, and displays the result.

Usage:
Compile: Compile the program using an appropriate compiler (e.g., gcc -o arp_program arp_program.c).

Run: Execute the compiled program (e.g., ./arp_program).

Input: Enter the IP address of the target client when prompted.

Output: The program will display the corresponding hardware address after performing ARP resolution.