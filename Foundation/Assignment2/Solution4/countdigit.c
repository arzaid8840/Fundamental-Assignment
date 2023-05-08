#include<stdio.h>
extern int countDigit(int);

int main(void)
{
	int n=0, count=0;
	printf("To check the count of digits\nEnter the number : ");
	scanf("%d", &n);
	count=countDigit(n);
	printf("count of digits = %d\n", count);
	return 0;


}
