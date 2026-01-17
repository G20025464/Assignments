#include<stdio.h>
void compare();
void main()
{
	compare();
}
void compare()
{
	int a=50,b=30,c=30;
	if(a>b)
	{
		if(a>c)
		{
			printf("a is grater");
		}
		else
		{
			printf("c is grater");
		}
		
	}
	if(b>c)
	{
		printf("b is grater");
	}
	else
	{
		printf("c is grater");
	}
}