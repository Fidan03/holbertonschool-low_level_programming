#include "main.h"

/**
	* print_diagonal - draws a diagonal line on the terminal
	* @n: number of times the character '\' should be printed
	*
	* Description: prints a diagonal of \ characters, each on a new line.
	* If n is 0 or less, prints only a newline.
	*/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
	_putchar('\n');
	return;
	}

	for (i = 0; i < n; i++)
	{
	for (j = 0; j < i; j++)
	_putchar(' ');  /* print spaces before '\' */
	_putchar('\\');
	_putchar('\n');
	}
}

