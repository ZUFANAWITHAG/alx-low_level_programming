#include "main.h"

/**
 * _isuppe -> this is a function to check upper case alphas
 * @c: an integer paramer
 * Return: somthing but success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);

	return (c >= 65 && c <= 90);
	return (c >= 'A' && c <= 'Z');
}
