#include<stdio.h>
#include<math.h>

int is_prime(int n){
	if(n<=0)
		return 0;
	if(n==1)
		return 0;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return 0;
	return 1;
	
}
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
			
