#include <stdio.>

/**
*main -> assign a random number to the variable n each time it is excuted
*and print the last digit of the number stored in the variable n
*Return: always 0
*/
int main(void)
{
char ch;
int n;
for (n = 48; n <=57; n++)
{
putchar(n);
}
char ch;
for (ch = 'a; ch <= 'f'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
