void main()
{
	int n=145;
	int temp=n,sum=0;
	   while(temp>0)
	    {
	   	  int d=temp % 10;
	   	  int fact = 1;
	   	  int i=1;
	   	    while(i<=d)
			{
			   
	   	      fact=fact*i;
	   	      i++;
	        }
	     sum=sum+fact;
	     temp=temp/10;
	    }
	  if(sum==n)
	     printf("strong number");
	     else
	      printf("not strong number");
}