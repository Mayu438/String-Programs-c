/*Write a program which accept string from user and copy first N charaters into some destination
string.
Eg:
Input String:
India is my country
Input of N:
8
Output String:
India is

AUTHOUR:MAYURI NARAYAN DIGHE.
BATCH:122_PPA7..*/

#include<stdio.h>
void main()
{
	char str[100],str1[100];
	int i=0,n;
	
	printf("PLEASE ENTER A FIRST STRING:\n");
	fgets(str,sizeof(str),stdin);
	printf("GIVEN STRING IS:-");
	printf("%s",str);
	printf("INPUT OF N:-");
	scanf("%d",&n);
	
	while(i<n)
	{
	str1[i]=str[i];
	i++;
	}
	
	printf("NEW COPIED STRING IS:");
	printf("%s",str1);

}
