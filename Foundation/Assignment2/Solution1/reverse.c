#include<stdio.h>
extern int reverse(int);
int main(void)
{
	int n=0, rev=0;
	printf("to check the Reverse Number\nEnter the number: ");
	scanf("%d", &n);
	rev= reverse(n);
	printf("Reverse of the number is %d\n",rev);
}
