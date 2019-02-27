#include <stdio.h>

void cough(int n);

int main(void)
{
	int x;
	printf("Enter times to cough:");
	scanf("%i",&x);

	cough(x);
}

void cough(int n)
{
	for(int i=0;i<n;i++)
	{
		printf("cough \n");
	}
}

/*
	 switch(x)
	{
		case 0:
			printf("You'll have no life to cheers or You'll enjoy it all. \n");
			break;
		case 1:
			printf("This is virus, stay away from this. \n");
			break;
		default :
			printf("you are not infected. \n ");
	}

*/
