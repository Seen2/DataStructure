#include <stdio.h>

int main(void)
{
	int x,y;
	printf("x=");
	scanf("%i",&x);
	printf("y=");
	scanf("%i",&y);

	if(x<y)
	{
		printf("x is less than y");
	}
	else if(x>y)
	{
		printf("x is greater than y");
	}
	else
	{
		printf("x is equal to y");
	}
	printf("\n");
}
