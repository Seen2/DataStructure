#include <stdio.h>

int main(void)
{
	int x;
	printf("Enter \n 0 for programing \n 1 for love \n");
	scanf("%i",&x);
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
}
