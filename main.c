#include <stdio.h>
#include<stdlib.h>
#include <sys/socket.h>
int main()
{
int server_fd;
//Creating socket
//https://www.geeksforgeeks.org/c/socket-programming-cc/
//Socket()function to create a socket
//the server_fd is an integer socket discriptor
//socket(domain,type,protocole)
//domain: integer, specifies communication domain. 
//type: communication type.
//protocol: Protocol value for Internet Protocol(IP), which is 0.
server_fd=socket(AF_INET,SOCK_STREAM,0);
	if (server_fd==0){
	perror("socket failed");
	exit(EXIT_FAILURE);
	}else{
	printf("socket created successfully%d\n",server_fd);
	}
 return(0);
}
