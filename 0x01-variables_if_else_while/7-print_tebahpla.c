#include <stdio.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{

	int s = 122, e = 97;

	while (s >= e)
	{
		putchar(s--);
	}

	putchar('\n');

	return (0);
}

