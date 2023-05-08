#include<stdio.h>

void swap(int* a, int* b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int main(void)
{
	int a, b;
	printf("Enter the Two Number: ");
	scanf("%d%d", &a, &b);
	printf("before Swapping a= %d and b= %d\n", a, b);

	swap(&a, &b);

	printf("After swapping a= %d and b=%d\n",a,b);

}
