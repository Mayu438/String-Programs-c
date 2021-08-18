/*Write a C program which accepts a string from user which contains a characters from ‘b’ to ‘y’.

AUTHOUR:MAYURI NARAYAN DIGHE.
BATCH:122_PPA7.*/

#include<stdio.h>
void main()
{
	char str[100];
	int i=0;
	printf("ENTER A STRING:\n");
	fgets(str,sizeof(str),stdin);
	printf("GIVEN STRING IS:\n");
	printf("%s",str);
	
	while(str[i]==' ')
	{
	i++;
	}
	while(str[i]!='\n')
	{
	if((str[i]==' '&&str[i+1]==' ')||(str[i]==' '&&str[i+1]=='\n'))
	{	
	i++;
	}
	else
	    if(str[i]=='a'||str[i]=='z'||str[i]=='A'||str[i]=='Z')
	i++;
	else
	{
	printf("%c",str[i]);
	i++;	
	}
	}

}
