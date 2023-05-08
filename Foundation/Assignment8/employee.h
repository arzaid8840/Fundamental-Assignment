#include<cstdio>

class Employee
{
	protected: 
		int id, age;
		float sal, comm;
	public:
		Employee(int ii=1, int aa=50, float ss=25000, float cc=1000)
		{
			id= ii;
			age=aa;
			sal=ss;
			comm=cc;
		}
		virtual double Income()const
		{
			return (sal+comm)*12-2500;
		}
		int GetAge()const
		{
			return age;
		}
		~Employee()
		{
		}
};
class SalesPerson : public Employee
{
	private:
		float incentive;
	public:
		SalesPerson(int ii, int aa, float ss, float cc,float in) : Employee(ii, aa, ss, cc)
		{
			incentive=in;
		}
		double Income()const
		{
			return (sal+comm+incentive)*12-2500;
		}
		int GetAge()const
		{
			return age;
		}
		~SalesPerson()
		{
		}
};
