#include "emp.h"
double empdetail(struct employee emp, float tax)
{

	double annincome = (emp.sal+emp.comm)*12-2500;
	if(annincome<=300000)
		return 0;
	else if(annincome>300000&&annincome<=500000)
		return annincome * 0.10;
	else
		return annincome *0.20;
}
