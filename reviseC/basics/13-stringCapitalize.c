#include <stdio.h>

const int LENGTH=20;
void Capitalize();

int main(void)
{
	printf("Enter your name and I will Capitalize it:");
	Capitalize();
}

void Capitalize()
{
	char str[LENGTH];
	fgets(str,LENGTH,stdin);
	int i=0;

	while(str[i]!='\0')
	{
		if(str[i]>='a' && str[i]<='z') //implicit typecasting
		{
			str[i]-='a'-'A'; //implicit typecasting
		}
		i++;
	}
	printf("%s",str);
}
