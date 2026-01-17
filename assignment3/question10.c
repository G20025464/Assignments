void main()
{
	int n=12345;
	int last=n%10;
	int first=n;
	  while(first >=10)
    {
	   first/=10;
    }
	  	printf("sum = %d",first + last);
	  
}