/*Write a C program to reverse a given string as below.
Eg:
Input String:
India is my country
Output String:
aidnI si ym yrtnuoc

AUTHOUR: MAYURI NARAYAN DIGHE.
BATCH:122_PPA7  */

#include<stdio.h>
void main()
{
	char str[100];
	int count=0,i=0,j=0;
	printf("ENTER A STRING:\n");
	fgets(str,sizeof(str),stdin);
	printf("%s",str);

	while(str[i]!='\0')
	{
	while(str[i]==' ')
	{
	i++;
	}
	count=i;
	
	while((str[i]!=' '&&str[i+1]!=' ')&&(str[i]!=' '&&str[i+1]!='\n')&&(str[i]!=' '&&str[i+1]!='\0'))
	
	i++;

	j=i;
	while(j>=count)
	{
	printf("%c",str[j]);
	j--;
	}
	if(str[i]=='\n'&&str[i+1]=='\0')
	break;
	else
	printf(" ");
	i++;
	}
	
}
