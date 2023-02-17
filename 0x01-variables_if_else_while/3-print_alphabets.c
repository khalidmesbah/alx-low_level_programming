#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{

	int s = 97, e = 122;

	while (s <= e)
	{
		putchar(s++);
		if (s == 123)
		{
			s = 65;
			e = 90;
		}
	}

	return (0);
}

