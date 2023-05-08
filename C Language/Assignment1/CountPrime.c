#include<stdio.h>
#include<math.h>
int is_prime(int n){
	if(n<=0)
		return 0;
	if(n==1)
		return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int count_primes(int a,int b)
{
	int count=0;
	for(int i=a;i<=b;i++)
	{
		if(is_prime(i))
			++count;
	}
	return count;
}
int main(void)
{
	int a,b;
	printf("enter the range to find prime numbers\n");
	scanf("%d%d",&a,&b);
	int count=count_primes(a,b);
	printf("the number of prime numbers between %d and %d is %d",a,b,count);
	
	return 0;
}
