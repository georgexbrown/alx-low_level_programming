#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * _atoi - Function that converts a string to integer
 * @s: Character pointer parameter
 *
 * Return: an integer type
 */
int _atoi(char *s)
{
	int n = 0;
    int sign = 1;

    while (isspace(*s)) {
        ++s;
    }
    if (*s == '-') {
        sign = -1;
        ++s;
    } else if (*s == '+') {
        sign = 1;
        ++s;
    }
    while (isdigit(*s)) {
        if (n > INT_MAX/10) { /* EDIT: protect against overflow */
            break;
        }
        n *= 10;
        int ch = *s - '0';

        if (n > INT_MAX - ch) {
            break;
        }
        n += ch;
        ++s;
    }
    if (isdigit(*s)) {
        return sign == 1 ? INT_MAX : INT_MIN;
    }
    return sign * n;
}
