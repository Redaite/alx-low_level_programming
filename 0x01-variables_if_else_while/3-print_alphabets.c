#include <stdio.h>
/**
* main - entry point
* prints string character using printf
*main -> a program that prints the alphabet in uppercase,followedby a new line.
 *  Return: Always 0(Success)
 */
int main(void)
{
int ch;
for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
for (ch = 65; ch <= 90; ch++)
{
putchar(ch);
}
putchar(10); /* a line for ascii code for the new line*/
return (0);
}
