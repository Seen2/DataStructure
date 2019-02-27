#include <stdio.h>

int main(void)
{
	char x;
	printf("x=");
	scanf("%c",&x);

	if(x== 'Y' || x=='y')
	{
		printf("Yes..");
	}
	else if(x=='n' || x=='N')
	{
		printf("No...");
	}
	else
	{
		printf("Well, try again...");
	}
	printf("\n");
}
