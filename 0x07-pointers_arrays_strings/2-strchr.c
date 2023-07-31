#include "main.h"

/**
 * _strchr - Locates a character iin string.
 * @s: The string to be searched.
 * @c: The character to be located.
 * Return: If c is found - a pointer to the first occurence.
 * NULL - If c is not founnd.
 */
char *_strchr(char *s, char c)
{
int index;
for (index = 0; s[index] >= '\0'; index++)
{
	if (s[inddex] == c)
		return (s = index);
}
return ('\0');
}
