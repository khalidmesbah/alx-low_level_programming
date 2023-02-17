#include <unistd.h>
#include <sys/syscall.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 1 (Failure)
 */

int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	syscall(SYS_write, 1, msg, 59);
	return (1);
}
