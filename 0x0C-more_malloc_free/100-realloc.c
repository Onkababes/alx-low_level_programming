#include "main.h"

/**
 * _realloc -  function that reallocates a memory block
 * @ptr: pointer to memory
 * @new_size: new size in bytes for new memory
 * @old_size: size in bytes for pointer
 * Return: results
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pnt = ptr;
	unsigned int t, b = new_size;
	char *s;

	if (ptr == NULL)
	{
		s = malloc(new_size);
		return (s);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	s = malloc(new_size);
	if (s == NULL)
		return (NULL);
	if (new_size > old_size)
		b = old_size;
	for (t = 0; t < b; t++)
		s[t] = pnt[t];
	free(ptr);
	return (s);
}
