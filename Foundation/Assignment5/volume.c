#include"box.h"
#include<stdio.h>

int main(void)
{
	struct Box b1 = {8,6, 4};
	struct Box b2 = {};
	int n=0, thick=0;
	printf("Enter the dimensions of box : ");
	scanf("%lf %lf %f", &b2.length, &b2.breadth, &b2.height);
	printf("Enter count : ");
	scanf("%d", &n);
	printf("volume without thickness :%.2lf\n",volume(b1, n));
	printf("enter thickness of box : ");
	scanf("%d", &b2.thick);
	printf("volume of box with thickness : %.2lf\n", volume(b2, n));
}
