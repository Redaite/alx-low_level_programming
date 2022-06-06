#include <stdio.h>
/**
*main -> a program that print all possible different combination of three digit
* Return: always 0
*/
int main (void)
{
int ch;
int n;
int l;
for (ch = 48; ch <= 57; ch++)
{
for (n = 49; n <= 57; n++)
{
for (l = 50; l <= 57; n++)
{
if (n > ch && l > n)
{
putchar(ch);
putchar(n);
putchar(l);
if (ch != 55 || n != 56 || l != 57)
{
putchar(44);
putchar(32);
}
}
}
}
}
putchar(10); /**This is ascii code for a new line **/
return (0);
}

