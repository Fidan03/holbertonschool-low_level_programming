#include "main.h"

/**
	* print_alphabet - prints the alphabet in lowercase
	*                  followed by a new line
	*/
void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";

	_putchar(*alphabet);          /* First call prints first character */
	_putchar(*(alphabet + 1));    /* Second call prints rest ... ? */
}

