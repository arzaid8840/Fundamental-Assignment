#include<stdio.h>
extern int palindrome(int);
int main(void)
{
	int num=0, val=0;
	printf("to check the palindrome\nEnter the Number: ");
	scanf("%d", &num);
	
	val= palindrome(num);
	if(val==num)
		printf("Number is Palindrome");
	else
		printf("Number is not palindrome");
}
