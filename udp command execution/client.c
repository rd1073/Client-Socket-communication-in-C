#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <unistd.h>
#include <netdb.h>
#include <netinet/in.h>
#include <string.h>
#include <arpa/inet.h>

int main()
{
 int s = socket(AF_INET, SOCK_DGRAM, 0);
 char b1[1024], b2[1024];
 struct sockaddr_in cadd, sadd;
 socklen_t slen = sizeof(sadd);
 bzero(&sadd, slen);
 sadd.sin_family = AF_INET;
 sadd.sin_addr.s_addr = inet_addr("127.0.0.1");
 sadd.sin_port = htons(8079);
bind(s, (struct sockaddr *)&sadd, slen);
 while (1)
 {
 printf("\nCOMMAND FOR EXECUTION ... ");
 fgets(b1, sizeof(b1), stdin);
 sendto(s, b1, sizeof(b1), 0, (struct sockaddr *)&sadd,
 slen);
 printf("\nData Sent !");
 recvfrom(s, b2, sizeof(b2), 0, (struct sockaddr
 *)&sadd, &slen);
 printf("UDP SERVER : %s", b2);
 }
 return 0;
} 
