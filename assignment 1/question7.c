void main()
{
		double bs=7000;
	double da,ta,hra,total;

	if(bs<=5000)
	{
		da = bs*10/100;
		ta = bs*20/100;
		hra = bs*25/100;
		total=bs+da+ta+hra;
		printf("da=%d,ta=%d,hra=%d,total=%d", da,ta,hra,total);	
		}
	
	else
	{
		da=bs*15/100;
		ta=bs*25/100;
		hra=bs*30/100;
		total=bs+da+ta+hra;
		printf("da=%d,ta=%d,hra=%d,total=%d",da,ta,hra,total);
	}
}