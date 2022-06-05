#include <stdio.h>
/**
*main -> a program that prints the alphabet in lowercase,followedby a new line.
 *Return : always 0
 */
int main(void)

{

	int ch;

	for (ch = 97; ch <= 122; ch++)

	{

		putchar(ch);

	}

	putchar(10); /* a line for ascii code for the new line*/

	return (0);

}
