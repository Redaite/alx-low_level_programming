#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main -> assign a random number to the variable n each time it is executed
*and print the last digit of the number stored in the variable n
*Return : always 0
*betty style doc for function main goes there
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);
if (n > 5){
	printf("greaterthan 5");
}
if (n == 0){
	printf("0");
}
if (n < 6 && n != 0){
	printf("less than 6 not 0");
}
printf("\n");
return (0);
}
