/*Write a C program which accept sentence from user and print number of small letters, capital
letters, Spaces and digits from that sentence.
Eg:
Input String:
abcDE 5Glm1 O
Output String:
Small: 5
Capital: 4 Digits: 2
Spaces: 2

AUTHOUR:MAYURI NARAYAN DIGHE.
BATCH:122_PPA7.  */


#include<stdio.h>
void main()
{
	char str[100];
	int i=0,space=0,small=0,capital=0,digit=0;
	
	printf("ENTER A STRING:\n");
	fgets(str,sizeof(str),stdin);
	printf("GIVEN STRING IS:\n");
	printf("%s",str);
	
	while(str[i]!='\n')
	{
	if(str[i]==' ')
	space++;
	else if(str[i]>=97&&str[i]<=122)
	small++;
	else if(str[i]>=65&&str[i]<=90)
	capital++;
	else
	digit++;
	i++;
	}
	printf("small=%dcapital=%ddigits=%dspaces=%d",small,capital,digit,space);

}
