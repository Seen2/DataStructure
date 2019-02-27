#include <stdio.h>
#include <stdlib.h>

#include "student.h"

int main(void)
{
	int enrollement;
	printf("enrollement:");
	scanf("%i",&enrollement);
	student *students=malloc(enrollement*sizeof(student));

	for(int i=0;i<enrollement;i++)
	{
		printf("Name:");
		scanf("%s",students[i].name);
		printf("Dorm:");
		scanf("%s",students[i].dorm);
	}
	for(int i=0;i<enrollement;i++)
	{
		printf("Name:%s, Dorm=%s",students[i].name,students[i].dorm);
		printf("\n");
	}

}

