#include "main.h"

/**
 * _strlen  - length of a string
 * @s: A pointer to an int
 *
 * Return: int on success 1
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s(s + len) != '\0')
		len++;

	return (len);
}
