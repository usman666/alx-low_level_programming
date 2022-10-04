#include "main.h"
/**
 * create_array -> creating array
 * @size: size of array to be created
 * @c: character an array is initialized with
 * Return: a pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *p;

	if (size == 0)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		s[x] = p;

	return s;
}
