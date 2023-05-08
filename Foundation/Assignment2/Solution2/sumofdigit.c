#include<stdio.h>
extern int sumDigit(int);

int main(void)
{
	int n=0, sum=0;
	printf("To check the sum of digits\nEnter the number : ");
	scanf("%d", &n);
	sum=sumDigit(n);
	printf("Sum of digits = %d\n", sum);
	return 0;


}
