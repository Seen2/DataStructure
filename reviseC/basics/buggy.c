#include <stdio.h>

#include <string.h>


char strConcat(char str1[],char str2[]);

int strlength(char str[]);

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
	int length=strlength(x);
	printf("length=%i",length);
	printf("\n");
	i=0;

	char s[2]={'a','\0'};
	strncat(s,x);
	printf("%s",x);
	//printf("%i",strConcat(x,x));
	/*
	while(s[i]!='\0')
	{
		printf("%c",s[i]);
		i++;
	}
 */
	printf("\n");
}

int strlength(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}

char strConcat(char str1[],char str2[])
{
	char str[strlen(str1)+strlen(str2)];
	int i=0,j=0;

	while(str2[j]!='\0')
	{
		while(str1[i]!='\0')
		{
			str[i]=str1[i];
			i++;
		}
		str[i+j+1]=str1[j];
		j++;
	}

	return str;
}
