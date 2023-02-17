#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{

	int s = 48, e = 57;

	while (s <= e)
	{
		putchar(s++);
	}

	s = 97, e = 102;

	while (s <= e)
	{
		putchar(s++);
	}

	putchar('\n');

	return (0);
}

