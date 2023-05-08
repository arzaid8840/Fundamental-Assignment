#include "emp.h"
#include<stdio.h>

int main(void)
{
	struct employee e1={};
	double tax=0;
	printf("Enter the Details of Employee\nId\nsalary\nage\ncommission: \n");
	scanf("%d%lf%hd%lf", &e1.id, &e1.sal, &e1.age, &e1.comm);

	if(e1.age>=60)
		printf("Tax for above 60 yr is: %.2lf\n", (empdetail(e1,tax))/2);
	else
		printf("Tax below 60 yr is: %.2lf\n", empdetail(e1, tax));
}
