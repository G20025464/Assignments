void main()
{
	int n=121, temp=n, rev=0;
	while (temp>0)
	{
		rev=rev*10+(temp%10);
		temp/=10;
	}
	if(rev==n)
	 printf("palindrome number");
	 else 
	 printf("not palindrome number");
}