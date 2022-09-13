#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
* Description:main - Assign a random number each time it is executed
*
*if the number is greater than 0: is positive
*
*if the number is less than 0: is negative
*
*if the number is 0: is zero
*
* Return: 0 if success
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is Positive\n", n);
}
else if (n < 0)
{
printf("%d is Negative\n", n);
}
else
{
printf("%d is Zero\n", n);
}
return (0);
}
