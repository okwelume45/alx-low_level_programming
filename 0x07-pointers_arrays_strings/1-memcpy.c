/**
 * _memcpy - copys n bytes of memory
 *
 * @dest: pointer to dest str
 * @src: source to be copied from
 * @n: num bytes to copy from src
 *
 * Return: pointer to beginning of memory area dest
 */
<<<<<<< HEAD

=======
>>>>>>> 5a8d6d50db9da85030842f7dd90d9edef27e10e1
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *start = dest;

	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}
	return (start);
}
