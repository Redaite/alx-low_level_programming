#include <stdio.h>
/**
*main -> a program that print the alphabet in lowercase,followed by a new line.
* Return: Always 0(Success)
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
}
putchar(10); /* a line for ascii code for the new line*/
return (0);
}
