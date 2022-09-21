#include <stdlib.h>
#include "main.h"

/**
 * _atoi - Function that converts a string to integer
 * @s: Character pointer parameter
 *
 * Return: an integer type
 */
int _atoi(char *s)
{
	int sign = 1;
    long long i = 0, j = 0;

    while ((*s) != '\0' && isspace(*s)) {
        ++s;
    }

    if (((*s)!='\0') && ((*s) == '+' || (*s) == '-')) {
        if ((*s) == '-') {
            sign = -1;
        }
        ++s;
    }

    if (((*s) != '\0') && (!isdigit(*s))) {
        return 0;
    }

    while (((*s) != '\0') && (isdigit(*s))) {
        i = i * 10 + (*s - '0');
        j = i * sign;
        cout << j << endl;
        if (j > INT_MAX) {
            return INT_MAX;
        }
        if (j < INT_MIN) {
            return INT_MIN;
        }

        ++s;
    }

    return j;
}
