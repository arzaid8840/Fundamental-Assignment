#include<stdio.h>

extern int countPrimes(long int, long int);

int main(void)
{
	long int lower, upper;
	printf("Enter lower and upper limit : ");
	scanf("%ld %ld", &lower, &upper);

	printf("Number of counts : %d\n", countPrimes(lower, upper));

	return 0;
}
