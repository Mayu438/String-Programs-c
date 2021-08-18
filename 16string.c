/*Write a C program which accept sentence from user and position from user and print the word at
that position.
Eg:
Input String:
India is my country
Input Position:
3
Output String:
my

AUTHOUR:MAYURI NARAYAN DIGHE.
BATCH:122_PPA7.*/

#include<stdio.h>
void main()
{
	char str[100];
	int ch,i=0,count=0;
	printf("ENTER A STRING:\n");
	fgets(str,sizeof(str),stdin);
	printf("given string is:\n");
	printf("%s",str);
	
	printf("enter position:");
	scanf("%d",&ch);
	
	while(str[i]==' ')
	{
	i++;
	}
	count=1;

	while(str[i]!='\0')
	{
	if(str[i]==' '&&str[i+1]!=' ')
	   if(str[i+1]!='\n'&&str[i+1]!='\0')
	
	count++;
	i++;

	if(count==ch)
	break;
	}

	if(ch==1)
	i--;

	while(str[i]!=' '&&str[i]!='\n'&&str[i]!='\0')
	{
	printf("%c",str[i]);
	i++;
	}	
}
