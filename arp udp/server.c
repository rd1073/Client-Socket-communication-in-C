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
 struct sockaddr_in sadd={0};
 struct arpreq myarp={{0}};
 unsigned char *ptr;
 int sd;
 sadd.sin_family=AF_INET;
 printf("Enter IP address: ");
 char ip[20];
 scanf("%s", ip);

 memcpy(&myarp.arp_pa,&sin,sizeof(myarp.arp_pa));
 strcpy(myarp.arp_dev,"echo");
 int d=socket(AF_INET,SOCK_DGRAM,0);
 printf("\nSend ARP request\n");

 ptr=&myarp.arp_pa.sa_data[0];
 printf("Received ARP Reply\n");
 printf("\nMAC Address for '%s' : ",ip);
 printf("%p:%p:%p:%p:%p:%p\n",ptr,(ptr+1),(ptr+2),(ptr+3),(ptr+4),(ptr+5));
 return 0;
} 