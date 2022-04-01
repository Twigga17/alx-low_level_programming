#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Print the name of the program
 * @argv: Arguments
 * @argc: Count arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
