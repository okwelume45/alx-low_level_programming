/**
 * _memset - fills n bytes of memory
 * @s: pointer to start of memory area
 * @b: constant byte to fill with
 * @n: num bytes to fill in
 *
 * Return: pointer to beginning of memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *start = s;

<<<<<<< HEAD
=======

>>>>>>> 5a8d6d50db9da85030842f7dd90d9edef27e10e1
	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (start);
}
