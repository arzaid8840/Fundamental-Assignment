#include<stdio.h>

extern int is_prime(int);
int main(void)
{
	int n;
	printf("Enter number :");
	scanf("%d", &n);
	if(is_prime(n)==1)
		printf("Number is prime");
	else
		printf("Number is not prime");

	return 0;
}
			
