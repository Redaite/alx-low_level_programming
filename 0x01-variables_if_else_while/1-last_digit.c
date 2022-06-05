#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main -> assign a random number to the variable n each time it is executed.
*betty style doc for function main goes there
*based on condition
*Return:always 0
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
/* your code goes there */
return (0);
}
