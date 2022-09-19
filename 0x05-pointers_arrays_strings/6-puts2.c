#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @s: A pointer to a char that will be changed
 *
 * Return: void which means our answer is correct
 */

void puts2(char *s)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	_putchar(10);
}
