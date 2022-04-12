#include "main.h"

/**
 * print_times_table - print the times table until n
 *
 * @n: n times table
 *
 * Return: No return
 */

void print_times_table(int n)
{
int i;
int j;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
if (j < n)
{
_putchar(i*j);
_putchar(',');
_putchar(' ');
}
else
{
_putchar(i);
}
}
_putchar('\n');
}
}
else
{
}
}
