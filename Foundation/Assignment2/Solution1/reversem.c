int reverse(int num)
{
	int rev=0;
	int sum=0;
	while(num!=0)
	{
		rev=num%10;
		sum=sum*10+rev;
		num=num/10;
	}
	return sum;
}
