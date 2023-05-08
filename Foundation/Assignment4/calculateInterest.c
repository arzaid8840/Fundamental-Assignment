#include<stdio.h>

double home_loan(double a, int n)
{
	return a<500000?8.5:8;	
}
double car_loan(double a,int n)
{
	return 12.5+0.5*(n/3);
}
double HomeLoan_installment(double p, int n)
{
	float r=home_loan(p, n);
	float i=p*n*r/100;
	return (p+i)/(12*n);
}
double CarLoan_installment(double p, int n)
{
	float r=car_loan(p, n);
	float i=p*n*r/100;
	return (p+i)/(12*n);
}
int main(void)
{
	int a=0, n=0;

	printf("Enter amount and period : ");
	scanf("%d %d", &a,&n);	

	printf("Home Installment is: %.2lf\n", HomeLoan_installment(a,n));
	printf("Car Installment is : %.2lf\n", CarLoan_installment(a,n));








}
