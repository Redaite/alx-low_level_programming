#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main -> assign a random number to the variable n each time it is excuted
*main -> The variable n will store a different value everytime this program run
*and print the last digit of the number stored in the variable n
*basd a condition
*Return : always 0
*betty style doc for function main goes there
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);
if (n > 5)
{
	printf("%d is greaterthan 5", n);
}
if (n == 0)
{
	printf("%d is 0"\n, n);
}

if (n < 6 && n != 0)
{
	printf("%d less than 6 not 0"\n, n);
}
printf("\n");
return (0);
}
