#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 *@c: The character to print

 * Return: On Success 1.
 */
int _putchar(char c)

{
return (write(1, &c, 1));
}

int main(void)
{
putchar (_putchar);
return (0);
}
