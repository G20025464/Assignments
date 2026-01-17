void main()
{
	int no=4,i=1,count=0;
	while(i<=no)
	{
	if(no%i==0)
	   {
    	count++;
	    }  
	    i++;
     }
         if(count==2)
	      printf("%d no is prime",no);
	        else 
	        printf("%d no is not prime",no);
}