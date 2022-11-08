#include "lists.h"

/**
 * startUp -  function that prints texts before the main executes
 */
void startUp(void)__attribute__((constructor));

void startUp(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
