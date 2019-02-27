#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *a;
	int size=0,capacity=0;

	while(1 && 3)
	{
		if(size==capacity)
		{
			a=realloc(a,sizeof(int));
			scanf("%i",&a[size]);
			size++;
			capacity=size;
		}
	}

	for(int i=0;i<capacity;i++)
	{
		printf("%i\n",a[i]);
	}

}
