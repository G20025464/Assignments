void main()
{
	int no=8128;
	int i=1,sum=0;
	while(i<no)
	{
		if(no%i==0)
		{
	     sum+=i;
		}
		i++;
	}
	if(sum==no)
      printf("%d no is perfect",no);
      else
      printf("%d no is not perfect",no);
}