#include<stdio.h>
void main()
{
	int age=10;
	{
		if(age<12)
		printf("person is child");
	    	else if(age>=13 && age<=19)
	    	printf("person is teenager");
	        	else if(age>=20 && age<=59)
	        	printf("person is adult");
                	else
	               {
	               	printf("person is senior");
                	}
	}
	
}