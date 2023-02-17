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
		if (s == 101 || s == 113)
		{
			s++;
			continue;
		}
		putchar(s++);
	}
	putchar('\n');
	return (0);
}

