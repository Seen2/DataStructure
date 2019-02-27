#include <stdio.h>


int main(int argc, char* argv[])
{
	if(argc==2)
	{
		printf("Hey! %s Darling \n",argv[1]);
		return 0; //on command line we can see the exit status code by: echo $?
	}
	else
	{
		printf("Sir..\n");

		return 1;//on command line we can see the exit status code by: echo $?
	}
}
