#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool is_armstrong(int num)
{
	int count=0;
	int rem=0;
	int temp=num;
	int sum=0;
	while(temp!=0)
	{
		++count;
		temp/=10;
	}
	temp=num;
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+pow(rem,count);
		temp/=10;
	}
	if(sum==num)
		return true;
	return false;
		
}
int main()
{	
	int num=0;
	printf("Enter number : ");
	scanf("%d", &num);
	is_armstrong(num)?printf("number is armstrong\n"):printf("the number is not armstrong");
	return 0;

}
