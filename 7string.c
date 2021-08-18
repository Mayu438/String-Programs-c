/*Write a C program to replace space with ‘$’ in given string.
Eg:
Input String:
India is my country
Output String:
India$is$my$coutry

AUTHOUR: MAYURI NARAYAN DIGHE.
BATCH:122_PPA7*/

#include<stdio.h>
void main()
{
	char str[100];	
	int i=0;	
	printf("ENTER A STRING:\n");
	fgets(str,sizeof(str),stdin);
	printf("%s",str);

	while(str[i]!='\0')
	{
	if(str[i]==' ')
	{
	printf("$");
	i++;
	}
	else
	{
	printf("%c",str[i]);
	i++;
	}
	}


}
