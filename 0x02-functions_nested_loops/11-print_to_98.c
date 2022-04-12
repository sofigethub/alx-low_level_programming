#include "main.h"
/**
 * print_to_98 - print all natural numbers from n to 98.
 * @n: the number to start counting from n to 98
 * Return: Always 0.
 */
void print_to_98(int n)
{
if (n < 98)
{
for (n = n; n < 98; n++)
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
_putchar(',');
_putchar(' ');
_putchar((98 / 10) + '0');
_putchar((98 % 10) + '0');
}
else
{
for (n = n; n > 98; n--)
_putchar((n / 10) + '0');                                        
_putchar((n % 10) + '0');
_putchar(',');                                                   
_putchar(' ');
_putchar((98 / 10) + '0');                                       
_putchar((98 % 10) + '0');                                       
}
}
}
