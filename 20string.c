/*Write a C program which accept string from user and copy that string into some another string.

AUTHOUR:-MAYURI NARAYAN DIGHE.
BATCH:-122_PPA7..*/

#include<stdio.h>
void main()
{
	char str[100],str1[100];
	int i=0;
	printf("PLEASE ENTER A 1ST STRING:\n");
	fgets(str,sizeof(str),stdin);
	printf("GIVEN STRING IS:\n");
	printf("%s",str);
		
	while(str[i]!='\n')
	{
		str1[i]=str[i];
		i++;
	}
	str1[i]='\0';
	printf("NEW COPIED STRING IS:");
	printf("%s",str1);
	
}
