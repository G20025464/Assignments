#include<stdio.h>
void character();
void main()
{
	character();
}
void character()
{
	int ch='a';
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
   {

		printf("character is Vowels");
    }
	else
	{
	
		printf("character is consonant");
	}
}