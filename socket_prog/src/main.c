/*
 * main.c
 *
 *  Created on: 26-Dec-2013
 *      Author: kmoza
 */

#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<sys/socket.h>
#include<netdb.h>
#include<unistd.h>
#include<errno.h>

int main()
{
	int sockHandle;
	//create socket
	if((sockHandle = socket(AF_INET,SOCK_STREAM,IPPROTO_IP))<0)
			{
				close(sockHandle);
				exit(EXIT_FAILURE);
			}
	return 0;
}


