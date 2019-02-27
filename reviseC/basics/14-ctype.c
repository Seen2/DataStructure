#include <stdio.h>
#include <ctype.h>

const int LENGTH=20;

int main(void)
{
	char str[LENGTH];
	printf("Enter your name and I will Capitalize it:");

	fgets(str,LENGTH,stdin);

	int i=0;
	while(str[i]!='\0')
	{
	
		printf("%i",isupper(str[i]));
		i++;
	}
	printf("\n");
	i=0;
	while(str[i]!='\0')
	{
		str[i]=toupper(str[i]);
		i++;
	}

	printf("%s",str);
}
