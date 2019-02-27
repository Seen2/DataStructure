#include <stdio.h>

//#define COUNT 3 //way to define global variable
const int COUNT=3;//way to define unchangable global variable because of const
void plot(int n[]);

int main(void)
{
	int x[COUNT];
	for(int i=0;i<COUNT;i++)
	{
		printf("Enter times to %i-Score:",i+1);
		scanf("%i",&x[i]);
	}

	plot(x);
}

void plot(int n[])
{
	for(int i=0;i<COUNT;i++)
	{
		printf("%i-Score[%i]:",i+1,n[i]);
		for(int j=0;j<n[i];j++)
		{
			printf("#");
		}
		printf("\n");
	}
}

