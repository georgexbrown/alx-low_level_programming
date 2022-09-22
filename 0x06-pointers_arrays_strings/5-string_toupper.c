#include <ctype.h>
#include "main.h"

/**
 * string_toupper - Function that changes lowercase to uppercase
 * @char *: Character pointer variable parameter
 * Return: char *
 */
char *string_toupper(char *str)
{
	char up;

	up = toupper(*str);
	return (up);
}
