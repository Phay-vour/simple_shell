#include "shell.h"

/**
 * bfree - free pointer & NULL of the address
 * @ptr: address the pointer to be free
 * Return: 1 or 0
 */

int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
