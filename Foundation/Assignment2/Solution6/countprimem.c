static int isPrime(long int num)
{
	register long int i=0;
	
	if(num==1)
		return 0;
	if(num==2 || num==3)
		return 1;
	if(num%2==0)
		return 0;
	for(i=3; i*i<=num; i+=2)
	{
		if(num%i==0)
			return 0;
	}
	return 1;
}

int countPrimes(long int lower, long int upper)
{
	register int count=0;
	register int i;

	for(i=lower; i<=upper; i++)
		count+=isPrime(i);
	return count;
}
