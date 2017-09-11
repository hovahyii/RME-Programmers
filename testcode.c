#include <stdio.h>

int main()
{
	char name[20];
	int i, j;
	
	printf("Hello World!\n\n");
	
	printf("Counting from 1 to 10:\n");
	
	for(i=0; i<10; i++)
		printf("%i ", i+1);
	
	printf("\n\nWhat is your name?\n> ");
	scanf("%s", name);
	
	printf("\nHello, %s!\n");
	
	for(i=0; i<10; i++)
	{
		for(j=0; j<i; j++)
			printf("*");
		
		printf("\n");
	}
	
	return 0;
}
