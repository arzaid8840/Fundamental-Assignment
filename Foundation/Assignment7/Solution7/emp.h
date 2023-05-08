#include <cstdio>
class Employee
{
	private:
		int id;
		float sal;
		float comm;
	public:
		Employee(int i, float s, float c)
		{
			id=i;
			sal=s;
			comm=c;
			puts("Constructor initialized");
		}

		double annualsal()
		{
			return (sal+comm)*12-2500;
		}

		double tax()
		{
			if (annualsal()<=300000)
				return 0;
			else if(annualsal()>300000 && annualsal()<=500000)
				return annualsal()*0.10;
			else
				return annualsal()*0.20;
		}

		~Employee()
		{
			puts("Destructor finalized");
		}
};
