#include <stdio.h>

/**
 * bmain - function executed before main
 * Return: no return.
 */

void first(void) __attribute__ ((constructor));
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
