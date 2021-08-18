/*Write a C program which accept sentence from user and print number of words of even and odd
length from that sentence.
Eg:
Input String:
India is my country. I love my country.
Output :
Even: 4
Odd: 4

AUTHOUR:MAYURI NARAYAN DIGHE.
BATCH:122_PPA7.  */

#include<stdio.h>
void main()
{
	char str[100];
	int i=0,count=0,even=0,odd=0;
	printf("ENTER A STRING:\n");
	fgets(str,sizeof(str),stdin);
	printf("GIVEN STRING IS:\n");
	printf("%s",str);

	while(str[i]!='\0')
	{
	while(str[i]==' ')
	{
	i++;
	}
	if(str[i]!='\n')
	count=1;
	while((str[i]!=' '&&str[i+1]!=' ')&&(str[i]!=' '&&str[i+1]!='\n')&&(str[i]!=' '&&str[i+1]!='\0'))
	{
	count++;
	i++;
	}
	if(str[i]!='\n')
	if(count%2==0)
	even++;
	else
	odd++;
	i++;
	}

	printf("even=%d odd=%d",even,odd);
	
}


