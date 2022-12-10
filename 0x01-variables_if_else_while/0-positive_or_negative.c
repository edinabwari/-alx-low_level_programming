#include <stdlib.h>
#include <time.h>

/*
 *main - determines whether the number in the variable n is positive or negative
 * Return : Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0)
	{
		printf("%d is positive ", &n);
	}
	if (n==0)
	{
		printf("%d is zero" ,&n);
	}
	else if (n<0)
	{
		printf("%d is negative" ,&n);
	}
	return (0);
}
