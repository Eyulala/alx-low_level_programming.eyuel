#include "main.h"

/**
 * _isdigit - A functionn that checks 0 through 9
 *
 *@c: parameter to be checked

 *Return: 1 on success and 0 on failure
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (0);
	else
		return (1);
}
