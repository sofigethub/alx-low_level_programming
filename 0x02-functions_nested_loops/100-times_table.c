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
int k;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
k= i * j;
if (j < n)
{
_putchar('0');
_putchar(',');
_putchar(' ');
}
else
{
_putchar(k);
}
}
_putchar('\n');
}
}
else
{
}
}
