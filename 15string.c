/*Write a C program which accept sentence from user and print last word from that sentence.
Eg:
Input String:
India is my country
Output String:
country

AUTHOUR:MAYURI NARAYAN DIGHE.
BATCH:122_PPA7  */

#include<stdio.h>
void main()
{
	char str[100];
	int i=0,j;
	
	printf("ENTER A STRING:\n");
	fgets(str,sizeof(str),stdin);
	printf("GIVEN STRING IS:\n");
	printf("%s",str);
	
	while(str[i]!='\n')
	{
	i++;
	}
	i--;
	while(str[i]==' ')
	{
	i--;
	}
	j=i;
	while(str[i]!=' ')
	{
	i--;
	}
	i++;
	while(i<=j)
	{
	printf("%c",str[i]);
	i++;
	}
}
