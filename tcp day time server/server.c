#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netdb.h>
#include<unistd.h>
#include<arpa/inet.h>
#include<time.h>

int main(int argc, char* argv[]){
    int s=socket(AF_INET, SOCK_STREAM,0);
    char b[1024];
    struct sockaddr_in sadd,cadd;
    sadd.sin_family=AF_INET;
    sadd.sin_port=htons(1999);
    sadd.sin_addr.s_addr=htonl(INADDR_ANY);

    socklen_t slen=sizeof(sadd);
    socklen_t clen=sizeof(cadd);


    bind(s, (struct sockaddr*)&sadd, sizeof(sadd));
    printf("Server is running");
    listen(s,1);
    int a=accept(s,(struct sockaddr*)&cadd,&clen);
    printf("Client connected");
    time_t t=time(NULL);
    snprintf(b,sizeof(b),"%s",ctime(&t));
    send(s,b,sizeof(b),0);
    close(s);
    return 0;




     

  
}


/*#include <stdio.h>
#include <time.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
	int s = socket(AF_INET, SOCK_STREAM, 0);

	struct sockaddr_in sadd;
	sadd.sin_family = AF_INET;
	sadd.sin_addr.s_addr = htonl(INADDR_ANY);
	sadd.sin_port = htons(1999);

	socklen_t slen = sizeof(sadd);

	bind(s, (struct sockaddr*) &sadd, slen);

	printf("Server connected!\n");

	listen(s, 1);

	struct sockaddr_in cadd;

	socklen_t clen = sizeof(cadd);

	int a = accept(s, (struct sockaddr*) &cadd, &clen);

	printf("Client connected!\n");

	char b[1024];
	time_t t = time(NULL);
	snprintf(b, sizeof(b), "%s", ctime(&t));

	send(a, b, sizeof(b), 0);

	close(s);
}

*/