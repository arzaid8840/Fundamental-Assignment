#include<stdio.h>

double volume(double length, double breadth, double height, double* surface, double* border)
{
	*border = 2*(length*breadth+breadth*length+length*height);
	*surface = 4*(length+breadth+height);
	return length*breadth*height;	

}
int main(void)
{
	double l=0, b=0, h=0, area=0, per=0, vol=0;
	printf("Enter dimensions of box : ");
       	scanf("%lf %lf %lf", &l, &b, &h);
	vol= volume(l, b, h, &area, &per);

	printf(" Volume of box = %.2lf \n Area = %.2lf \n Perimeter = %.2lf\n", vol, area, per);

	return 0;

	
}
