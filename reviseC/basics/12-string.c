#include <stdio.h>
#include <string.h>

const int LENGTH=19;

int main(void)
{
	char x[LENGTH];
	int i=0;
	fgets(x,LENGTH,stdin); //gets(x); is also applicable
	while(x[i]!='\0')
	{
		printf("%c",x[i]);
		i++;
	}
	printf("\n");
}


