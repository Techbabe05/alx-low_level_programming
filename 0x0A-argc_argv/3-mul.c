#include <stdio.h>
#include <stdlib.h>

/**
*main - multiplies two numbers
*@argc: number of arguments passed to the function
*@argv: argument vector of pointers to strings
*
*Return: 0 if no errors, else 1
*/
int main(int argc, char *argv[])
{
	int i, j, mul;
	if (argc <= 2)

	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;

	printf("%d\n", mul);
	return (0);
}
