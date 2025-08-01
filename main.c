#include <stdio.h>
#include<stdlib.h>
#include <sys/socket.h>
int main()
{
int server_fd;
//Creating socket
server_fd=socket(AF_INET,SOCK_STREAM,0);
	if (server_fd==0){
	perror("socket failed");
	exit(EXIT_FAILURE);
	}else{
	printf("socket created successfully%d\n",server_fd);
	}
 return(0);
}
