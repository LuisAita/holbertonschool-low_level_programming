#include <unistd.h>

/**
 * _isupper - checks if digit is U P P E RRRRRR
 * @c: The character to print
 *
 * Return: On success 1.
 */
int _isupper(int c)
{
	if (c => 65 && c =< 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	
}
