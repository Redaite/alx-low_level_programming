#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* more headers goes there
* betty style doc for function main goes there assign a random number
*to the variable n each time it is executed.
*Complete the source code in order to print the last digit of the number
stored in the variable n.
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n >= 5)
	printf("%d is greaterthan 5\n", n);
if (n == 0)
	printf("%d is 0\n", n);
if (n < 6 && n != 0)
{
	printf("%d is less than 6 and not 0\n", n);
}
return (0);
}
