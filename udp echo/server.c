#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

int main(){
    int s=socket(AF_INET, SOCK_DGRAM,0);
    char b[1024];
    struct sockaddr_in sadd,cadd;
    sadd.sin_family=AF_INET;
    sadd.sin_port=htons(1999);
    sadd.sin_addr.s_addr=htonl(INADDR_ANY);

    socklen_t slen=sizeof(sadd);

    bind(s, (struct sockaddr*)&sadd, sizeof(sadd));
    printf("Server is running");
    while(1){
        socklen_t clen=sizeof(cadd);
        ssize_t n=recvfrom(s,b,sizeof(b),0,(struct sockaddr*)&cadd,&clen);
        b[n]='\0';
        printf("Client %s",b);
        sendto(s,b,sizeof(b),0,(struct sockaddr*)&cadd,clen);




    }


    close(s);
    return 0;
}



/*#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

int main() {
    int s=socket(AF_INET, SOCK_DGRAM, 0);
    char b[1024];
    struct sockaddr_in sadd, cadd;

     

    sadd.sin_family = AF_INET;
    sadd.sin_addr.s_addr = htonl(INADDR_ANY);
    sadd.sin_port = htons(1999);

    bind(s, (struct sockaddr*)&sadd, sizeof(sadd));

    printf("Server listening...\n");

    while (1) {
        socklen_t clen = sizeof(cadd);
        ssize_t n = recvfrom(s, b, sizeof(b), 0, (struct sockaddr*)&cadd, &clen);
        b[n] = '\0';

        printf("Client: %s", b);

        sendto(s, b, sizeof(b), 0, (struct sockaddr*)&cadd, clen);
    }

    close(s);
    return 0;
}
*/