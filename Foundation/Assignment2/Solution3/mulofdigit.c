#include<stdio.h>
int mulDigit(int);

int main(void)
{
	int n=0, product=0;
	printf("To check the product of digits\nEnter the number : ");
	scanf("%d", &n);
	product=mulDigit(n);
	printf("product of digits = %d\n", product);
	return 0;


}
