#include "main.h"
/**
 * print_to_98 - print all natural numbers from n to 98.
 * @n: the number to start counting from n to 98
 * Return: Always 0.
 */
void print_to_98(int n)
{
int i;
if (n <= 98 && n >= -100)
{
for (i = n; i <= 98; i++)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar(',');
_putchar(' ');
}
}
else if (n > 98)
{
for (i = n; i > 98; n--)
{
_putchar((n / 100) + '0');                                       _putchar((n % 100) + '0');
_putchar(',');                                                   
_putchar(' ');
}
}
else 
{
for (i = n; i <=98; i++)
{
_putchar((i / 100) + '0');                                
_putchar((i % 100) + '0');                                
_putchar(',');                                            
_putchar(' ');                                            
}
}
}
