int mulDigit(int num)
{
	int pro=1;
	while(num!=0)
	{
		
		pro*=num%10;
		num/=10;
	}
	return pro;
}
