#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{

	int s = 48, e = 57;
	int sep = 44;

	while (s <= e)
	{
		putchar(s++);
		if (s == e + 1)
			sep = 36;
		else
		{
			putchar(' ');
		}
		putchar(sep);
	}

	putchar('\n');

	return (0);
}

