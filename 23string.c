/*Write a C program which accept two strings from user and append second string after first string.
Eg:
Input String:
India Country
Output String:
IndiaCountry

AUTHOUR:MAYURI NARAYAN DIGHE.
BATCH:122_PPA7.*/

#include<stdio.h>
void main()
{
	char str[100],str1[100];
	int i=0,j=0;	

	printf("ENTER A 1st STRING:\n");
	fgets(str,sizeof(str),stdin);
	printf("ENTER A 2ND STRING:\n");
	fgets(str1,sizeof(str1),stdin);
	
	while(str[i]!='\n')
	{
		i++;
	}
	i--;
	while(str1[j]!='\n')
	{
	str[i]=str1[j];
	j++;
	i++;
	}
	str[i]='\0';
	printf("string after appending second:\n");
	printf("%s",str);

}
