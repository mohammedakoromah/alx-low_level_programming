#include "main.h"

/**
 * _isupper - Checks for lowercase charcter
 * @c: The charcter to be checked
 * Return: 1 for uppercase charcter or 0 for anything else
 */

int _isupper(int c)

{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
