#include "employee.h"
#include<cstdio>
double taxcal(Employee& emp)
{
	double inc= emp.Income();
	float t=0;
	if(inc<=300000)
		t=0;
	else if(inc>300000&& inc<=500000)
		t=0.10*inc;
	else
		t=0.20*inc;

	if(emp.GetAge()>60)
		return t/2;
	return t;
}
int main(void)
{
	int i;
	float s, c;
	int a;
	float in;

	printf("Enter the Employee Id: ");
	scanf("%d", &i);

	printf("Enter the Employee age: ");
	scanf("%d", &a);

	printf("Enter the Employee Salary: ");
	scanf("%f", &s);
	printf("Enter the Employee Commission: ");
	scanf("%f", &c);

	Employee e(i, a, s, c);
	printf("Total tax for my Employee: %.2lf\n", taxcal(e));
	
	printf("Enter the Incentive for SalesPerson: ");
	scanf("%f", &in);

	SalesPerson sp(i,a, s, c, in);
	printf("Total tax of Your Employee: %.2lf\n", taxcal(sp));
}
