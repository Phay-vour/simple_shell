#include "shell.h"

/**
 * _strcpy - copy a string
 * @dest: conclusion
 * @src: inception
 * Return: point of conclusion
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[a])
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = 0;
	return (dest);
}

/**
 * _strdup - reproduction of a string
 * @str: string to reproduce
 * Return: point to the reproduced string
 */

char *_strdup(const char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	return (ret);
}

/**
 * _puts - print the input of a string
 * @str: string to be printed
 * Return: Nothing
 */

void _puts(char *str)
{
	int a = 0;

	if (!str)
		return;
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
}

/**
 * _putchar - write the char c to stdout
 * @c: char to print
 * Return:  1
 * On error, -1 is returne
 */

int _putchar(char c)
{
	static int a;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || a >= WRITE_BUF_SIZE)
	{
		write(1, buf, a);
		a = 0;
	}
	if (c != BUF_FLUSH)
		buf[a++] = c;
	return (1);
}
