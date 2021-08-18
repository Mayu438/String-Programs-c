/*Write a C program which accept two strings from user and append N characters of second string
after first string.
Eg:
Input String:
India Country
Input of N:
4
Output String:
IndiaCoun

AUTHOUR:MAYURI NARAYAN DIGHE.
BATCH:122_PPA7.*/

#include<stdio.h>
void main()
{
	char str[100],str1[100];
	int n,i=0,j=0;
	
	printf("ENTER A 1ST STRING:\n");
	fgets(str,sizeof(str),stdin);
	printf("ENTER A 2ND STRING:\n");
	fgets(str1,sizeof(str1),stdin);
	printf("ENTER N VALUE:\n");
	scanf("%d",&n);

	while(str[i]!='\n')
	{
	i++;
	}
	i--;
	while(n)
	{
	str[i]=str1[j];
	j++;
	i++;
	n--;
	}

	str[i]='\0';
	printf("string after appending second:");
	printf("%s",str);
	
}
