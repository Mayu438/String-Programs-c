/*Write a C program to accept string and print it in the reverse order.
Eg:
Input String:
India is my country
Output String:
yrtnuoc ym si aidnI

AUTHOUR:MAYURI NARAYAN DIGHE
BATCH: 122_PPA7 */


#include<stdio.h>
void main()
{
	char str[100];
	int i=0,count=0;
	printf("ENTER A STRING:\n");
	fgets(str,sizeof(str),stdin);
	printf("%s",str);

	while(str[i]!='\0')
	{
	count++;
	i++;
	}
	for(i=count;i>=0;i--)
	{
	printf("%c",str[i]);
	}
}
