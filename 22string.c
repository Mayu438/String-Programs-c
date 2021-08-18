/*Write a C program which accept string from user and accept number N then copy last N character
into some another string.
Eg:
Input String:
India is my country
Input of N:
5
Output String:
untry

AUTHOUR:MAYURI NARAYAN DIGHE.
BATCH:122_PPA7.*/

#include<stdio.h>
void main()
{
	char str[100],str1[100];
	int i=0,n,temp;
	
	printf("ENTER A STRING:\n");
	fgets(str,sizeof(str),stdin);
	printf("GIVEN STRING IS:\n");
	printf("%s",str);
	printf("enter the n position:\n");
	scanf("%d",&n);
	
	while(str[i]!='\n')
	{
		i++;
	}
	i--;
	temp=i;
	while(n)
	{
	i--;
	n--;
	}
	n=0;
	
	while(i<=temp)
	{
	str1[n]=str[i];
	i++;
	n++;
	}
	str1[n]='\0';
	printf("NEW COPIED STRING IS:\n");
	printf("%s",str1);

}
