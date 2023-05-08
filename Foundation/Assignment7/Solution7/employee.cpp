#include "emp.h"
#include<cstdio>

double totaltax(Employee& info, short int age)
{
	if(age>60)
		return info.tax()/2;
	else
		return info.tax();
}
int main(void)
{
	Employee myemp(1, 25000,1000);
	int i;
	float s, c;
	short int age=0;
	printf("Enter the Employee Id, Salary and Commission: ");
	scanf("%d%f%f", &i, &s, &c);
	printf("Enter the Age:");
	scanf("%hd", &age);
	Employee youremp(i,s,c);
	printf("total tax of my Employee: %lf\n", totaltax(myemp, age));
	printf("total tax of my Employee: %lf\n", totaltax(youremp, age));
}
