#include<stdio.h>
#include<stdlib.h>
int main()
{

    char *hostname;
	struct hostent *hostinfo,*ip;

	hostname = "google.com";
	hostinfo = gethostbyname (hostname);

	if (hostinfo == NULL)
	{
	printf("-> no connection!\n");
    exit(0);
	}
	else
	{
	    printf("-> connection established!\n");

	}
}
