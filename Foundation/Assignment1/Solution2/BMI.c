#include<stdio.h>
int main(void)
{
	double weight=0, height=0;
	double bmi=0;
	printf("Enter the Height(in Meter) and Weight (in KG): ");
	scanf("%lf%lf", &height, &weight);

	bmi=weight/(height*height);

	if(bmi<18.5)
		printf("You're Under weight\n");
	else if(bmi>=18.5 && bmi<=25)
		printf("you're fit\n");
	else
		printf("you're Obese\n");
}
