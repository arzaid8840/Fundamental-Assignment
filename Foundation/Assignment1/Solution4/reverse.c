#include<stdio.h>
int main(void)
{
	int M=0;
	int N=0;
	printf("Enter the Number: ");
	scanf("%d", &M);
	if(M==0)
		printf("Number is Zero");
	else
	{
		while(M!=0)
		{
			N=N*10+M%10;
			M/=10;
		}
		printf("Reverse of a Number is %d\n", N);
	}
}
