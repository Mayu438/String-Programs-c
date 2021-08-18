/*Write a C program to accept string with multiple spaces from user and print it with a sinlge space as
a delimiter.
Eg:
Input String:
_____India_____is_my_________country___________________
Output String:
India_is_my_country
(Consider _ as space)

AUTHOUR:MAYURI NARAYAN DIGHE.
BATCH:122(PPA 7)*/

#include<stdio.h>
void main()
{
	char str[100];
	int i=0;

	printf("ENTER A STRING:\n");
	fgets(str,sizeof(str),stdin);
	printf("%s\n",str);

	while(str[i]==' ')
	{
	i++;
	}
	while(str[i]!='\0')
	{
	if(str[i]==' '&&str[i+1]==' '||str[i]==' '&&str[i+1]=='\n')
	{
	i++;
	}
	else 
	{
	printf("%c",str[i]);
	i++;
	}
	}
}
