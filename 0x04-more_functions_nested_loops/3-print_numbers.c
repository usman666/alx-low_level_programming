#include <stdio.h>
#include "main.h"

/**
 *print_numbers - function that print all numbers from
 *o to 9
 *Return: returns nothing
 */

void print_numbers(void)
{

	int n;

	for (n = 10; n < 19; n++)
	{
		putchar(n);
	}
	putchar(10);
}
