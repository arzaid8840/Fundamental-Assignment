#include<stdio.h>

int reverse(int num)
{
	int rev = 0;
	int rem=0;
	while(num!=0)
	{
		rem=num%10;
		rev = rev*10+rem;
		num = num/10;
	}
	return rev;
}
int main(void)
{
	int num=0;
	printf("Enter the number : ");
	scanf("%d", &num);
	printf("Reverse of number is : %d", reverse(num));

	return 0;
}
