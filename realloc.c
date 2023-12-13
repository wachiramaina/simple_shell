#include "main.h"

/**
 * _realloc - allocate memory and set all values to 0
 * @ptr: pointer to memory previously allocated
 * @0_size: size previously allocated
 * @n_size: new size to allocate
 * Return: pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int o_size, unsigned int n_size)
{
	void *p;
	unsigned int i;

	if (n_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (n_size == o_size)
		return (ptr);

	if (ptr == NULL)
	{
		p = malloc(n_size);
		if (p == NULL)
			return (NULL);
		else
			return (p);
	}
	p = malloc(n_size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < o_size && i < n_size; i++)
		*((char *)p + i) = *((char *)ptr + i);
	free(ptr);

	return (p);
}
