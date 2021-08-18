/*Write a C program to convert the string from upper case to lower case.
Eg:
Input String:
India Is My Country
Output String:
india is my country 

AUTHOUR:MAYURI NARAYAN DIGHE.
BATCH:122_PPA7..*/

#include<stdio.h>
void main()
{
	char str[100];
	int i=0;

	printf("ENTER A STRING:\n");
	fgets(str,sizeof(str),stdin);
	printf("INPUT STRING IS:\n");
	printf("%s",str);
	
	while(str[i]==' ')
	{
	i++;
	}
	while(str[i]!='\n')
	{
	if(str[i]>=65&&str[i]<=90)
	{
	str[i]=str[i]+32;
	printf("%c",str[i]);
	i++;
	}
	}
	

}
