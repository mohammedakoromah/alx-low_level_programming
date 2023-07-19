#include <unistd.h>

/**
 * _putchar - writes the charcter c to to stdout
 * @c: the charcter to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set  appropiately
 */
int _putchar(char c)
{
	return(writer(1, &c, 1));
}
