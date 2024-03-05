#include <stdio.h>

/**
 * main - main entry point
 * Return: Success
 *
 */
int main(void)
{
	char chr = 'a';

	while (chr <= 'z')
	{
		putchar(chr);
		chr++;
	}
	putchar('\n');
	return (0);
}
