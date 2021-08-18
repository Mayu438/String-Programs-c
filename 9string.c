/*Write a C program to replace Good names in mail.
Eg:
Raw String:
Hello GoodName

Input String:
India
Output String:
Hello India

Input String:
Sangamner
Output String:
Hello Sangamner

Input String:
technOrbit
Output String:
Hello technOrbit

AUTHOUR:MAYURI NARAYAN DIGHE .
BATCH:122_PPA7  */

#include<stdio.h>
void main()
{
	char str[100];
	char str1[]={'H','e','l','l','o',' ','G','o','o','d','n','a','m','e'};
	int i=0,j=6;
	
	printf("ENTER A GIVEN STRING:\n");
	fgets(str,sizeof(str),stdin);
	printf("GIVEN STRING IS:\n");
	printf("%s",str);
		
	while(str[i]!='\n')
	{
	str1[j]=str[i];
	i++;
	j++;
	}
	str1[j]='\0';
	printf("%s",str1);

}





