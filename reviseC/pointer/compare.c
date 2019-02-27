#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int ns,nt;

	printf("Enter s length:");
	scanf("%i",&ns);

	printf("Enter t length:");
	scanf("%i",&nt);

	char *s= malloc(ns*sizeof(char));

	char *t= malloc(nt*sizeof(char));

	printf("Enter s :");
	scanf("%s",s);

	printf("Enter t :");
	scanf("%s",t);

	if(strcmp(s,t) == 0)
	{
		printf("same ...\n");
	}
	else
	{
		printf("different...\n");
	}
}
