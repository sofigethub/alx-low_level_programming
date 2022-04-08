#include <stdio.h>
/**
 * main - Entrb point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, b, c;
for (a = 48; a <= 57; a++)
{
for (b = 48; b <= 57; b++)
{
for (c = 48; c <= 57; c++)
{
if (a == b || a == c || b == c || b <= a || c <= b)
{
}
else
{
putchar(a);
putchar(b);
putchar(c);
if (a == 55 && b == 56 && c == 57)
{
}
else
{
putchar(44);
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
