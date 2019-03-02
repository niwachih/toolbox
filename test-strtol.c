#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a[]="1000000000";
	char b[]="1000000000";
	char c[]="ffff";
	
	printf("a=%d\n",strtol(a,NULL,10));
	printf("b=%d\n",strtol(b,NULL,2));
	printf("c=%d\n",strtol(c,NULL,16));
	
	return 0;
}

//test result:
//
//a=1000000000
//b=512
//c=65535