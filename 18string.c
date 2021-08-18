/*Write a C program which toggles the case of a string.
Eg:
Input String:
technOrbit Infosystems
Output String:
TECHNoRBIT iNFOSYSTEMS

AUTHOUR:MAYURI NARAYAN DIGHE.
BATCH:122_PPA7..*/

#include<stdio.h>
void main()
{
	char str[100];
	int i=0;
	printf("ENTER A STRING:\n");
	fgets(str,sizeof(str),stdin);
	printf("GIVEN STRING IS:\n");
	printf("%s",str);

	while(str[i]!='\n')
	{
	if(str[i]>=65&&str[i]<=90)
		str[i]=str[i]+32;
	else if(str[i]>=97&&str[i]<=122)
		str[i]=str[i]+32;
	printf("%c",str[i]);
	i++;
	
	
	}
}
