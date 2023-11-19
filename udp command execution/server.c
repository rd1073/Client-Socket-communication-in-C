#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>
#include <netinet/in.h>
#include <string.h>
#include <sys/stat.h>
#include <arpa/inet.h>
#include <unistd.h>
#define MAX 1000
int main()
{
 int s = socket(AF_INET, SOCK_DGRAM, 0);
 int size;
 char b1[MAX], b2[MAX] = "Command Successfully executed !";
 struct sockaddr_in cadd, sadd;
 socklen_t clen = sizeof(cadd);
 bzero(&sadd, sizeof(sadd));
 sadd.sin_family = AF_INET;
 sadd.sin_addr.s_addr = htonl(INADDR_ANY);
 sadd.sin_port = htons(8079);
 bind(s, (struct sockaddr *)&sadd, slen);
 while (1)
 {
 bzero(b1, sizeof(b1));
recvfrom(s, b1, sizeof(b1), 0, (struct sockaddr *)&cadd,
&clen);
 system(b1);
 printf("Command Executed ... %s ", b1);
sendto(s1, b2, sizeof(b2), 0, (struct sockaddr *)&cadd,
cadd);
 }
 close(s);
 return 0;
} 
