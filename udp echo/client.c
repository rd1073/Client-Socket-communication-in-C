 
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

int main() {
    int s=socket(AF_INET, SOCK_DGRAM, 0);
    char b[1024];
    struct sockaddr_in sadd;

    sadd.sin_family = AF_INET;
    sadd.sin_port = htons(1999);
    sadd.sin_addr.s_addr =htonl(INADDR_ANY);

    printf("Enter a message: ");
    socklen_t slen = sizeof(sadd);

    fgets(b, sizeof(b), stdin);
    sendto(s,b, sizeof(b), 0, (struct sockaddr*)&sadd, slen);


    

    ssize_t n = recvfrom(s, b, sizeof(b), 0, (struct sockaddr*)&sadd, &slen);
    b[n] = '\0';

    printf("Server: %s", b);

    close(s);
    return 0;
}


