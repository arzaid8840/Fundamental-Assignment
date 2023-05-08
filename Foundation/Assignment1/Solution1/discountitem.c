#include<stdio.h>
int main(void)
{
	int c=0;
	int q=0;
	double total=0;
	float d=0;
	printf("Discount offer of an Item\nEnter Unit Cost and Quantity: ");
	scanf("%d%d",&c, &q);
	if(q>=12){
		d=5;
		total=c*q*(1-d/100);
	}
	else
	{
		d=0;
		total= c*q*(1-d/100);
	}
	printf("Total Price: %.2lf\n", total);

}
