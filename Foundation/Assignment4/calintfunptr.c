#include<stdio.h>

double home_loan(double a, int n)
{
	return a<500000?8.5:8;	
}
double car_loan(double a,int n)
{
	return 12.5+0.5*(n/3);
}
double commonInterest(double p, int n, double (*interest)(double, int))
{
	float r=interest(p, n);
	float i=p*n*r/100;
	return (p+i)/(12*n);
}
int main(void)
{
	int a=0, n=0;

	printf("Enter amount and period : ");
	scanf("%d %d", &a,&n);	

	printf("Home Installment is: %.2lf\n", commonInterest(a,n,(home_loan)));
	printf("Car Installment is : %.2lf\n", commonInterest(a,n,(car_loan)));








}
