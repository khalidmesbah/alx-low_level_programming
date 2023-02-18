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
		if (s != e + 1)
		{
			putchar(' ');
			putchar(44);
		}
	}

	putchar('\n');

	return (0);
}

