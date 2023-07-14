#include <stdio>
/**
 * main - A program that prints the size of various types on the computer it is compiled and run on
 * return 0 (success)
 */
int main(void)
{
	char a;
	int i;
	long int o;
	long long int u;
	float y;

printf("print the size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(o));
printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(u));
printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(y));
return (0);
}
