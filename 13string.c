/*Write a C program which accept sentence from user and print number of white spaces from that
sentence.
Eg:
Input String:
India is my country
Output:
3

AUTHOUR:MAYURI NARAYAN DIGHE.
BATCH:122_PPA7.  */

#include<stdio.h>
void main()
{
	char str[100];
	int i=0,count=0;
	
	printf("ENTER A STRING:\n");
	fgets(str,sizeof(str),stdin);
	printf("GIVEN STRING IS:\n");
	printf("%s",str);
	
	while(str[i]!='\0')
	{
	if(str[i]==' ')
	{
	count++;
	i++;
	}
	else
	{
	i++; 
	}
	}
	printf("number of spaces =%d",count);
}
