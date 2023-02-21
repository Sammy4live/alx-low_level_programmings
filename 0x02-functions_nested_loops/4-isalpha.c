#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 * @c: single letter input
 * Return: 1 for alphabetic character  or 0 otherwise
 */

int _isalpha(int c)
{
	if (((c >= 65 && c <= 97)) || ((c >= 97 && c <= 122)))
	{
	return (1);
	}
	return (0);
}
