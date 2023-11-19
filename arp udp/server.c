#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <net/if_arp.h>
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include<stdlib.h>
int main()
{
 struct sockaddr_in sadd;
 struct arpreq myarp={{0}};
 unsigned char *ptr;

 sadd.sin_family=AF_INET;
 printf("Enter IP address: ");
 char ip[20];
 scanf("%s", ip);


 printf("\nSend ARP request\n");

 ptr=&myarp.arp_pa.sa_data[0];
 printf("Received ARP Reply\n");
 printf("\nMAC Address for '%s' : ",ip);
 printf("%p:%p:%p:%p:%p:%p\n",ptr,(ptr+1),(ptr+2),(ptr+3),(ptr+4),(ptr+5));
 return 0;
} 