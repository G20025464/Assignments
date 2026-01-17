
void main()
{
	int n=153;
	int a,b,c;
	
	a=n/100;
	b=(n/10)%10;
	c=n%10;
	 
	 int sum=(a*a*a)+(b*b*b)+(c*c*c);
	
	if(sum==n)
	printf("armstrong");
	else
	printf("not armstrong");
}