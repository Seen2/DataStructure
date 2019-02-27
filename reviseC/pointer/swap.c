#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main(void)
{
	int x=16,y=9;

	swap(&x,&y);

	printf(" x=%i y=%i \n",x,y);


}

void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
