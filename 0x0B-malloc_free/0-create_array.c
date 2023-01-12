#include "main.h"
#include <stdlib.h>
/**
 *creat_array - creats an array of chars and initializes it with
 *a specific char.
 *@size: size of array.
 *@c: char to initializearray with.
 *
 *Return: Null if it fails or
 *pointer to array.
 */
char *creat_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	/* check if malloc was successful */

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);

}


