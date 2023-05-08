#include<stdio.h>
int main(void)
{
	double a=0, i=0;
	short int n=0;
	int ch=0;
	int r=0;
	printf("Enter the Amount and period: ");
	scanf("%lf%hd", &a, &n);
	printf("Enter the choice for Loan\n1. Educational\n2. Home\n3. Personal\n4. Business\n0. Exit\n");
	scanf("%d", &ch);
	switch (ch)
	{
		case 1:
			r=7.0;
			i=a*(1+r*n/100)/(12*n);
			break;
		case 2:
			r=8.5;
			i=a*(1+r*n/100)/(12*n);
			break;
		case 3:
			r=9.5;
			i=a*(1+r*n/100)/(12*n);
			break;
		case 4:
			r=10.0;
			i=a*(1+r*n/100)/(12*n);
			break;
		case 0:
			printf("Exiting code\n");
			break;
		default:
			printf("Invalid Choice\n");
	}
	printf("Interest: %.2lf\n", i);
	
}
