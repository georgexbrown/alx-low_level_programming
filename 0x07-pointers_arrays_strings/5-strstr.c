#include <string.h>
#include "main.h"

/**
 * _strstr - Function that locates a substring and find first occurence
 * @haystack: Character pointer to be scanned
 * @needle: Character pointer that holds characters to scan in pointer *s
 * Return: Character pointer *d returns the scanned value
 */
char *_strstr(char *haystack, char *needle)
{
	char *d;

	d = strstr(haystack, needle);
	return (d);
}
