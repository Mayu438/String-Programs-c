/*Write a program which accept sentence from user and print number of words from that sentence.
Input String:
India_is_my_country
Output:
4
Input String:
______India______is____my____country____ (Consider _ as space)
Output:
4

AUTHOUR: MAYURI NARAYAN DIGHE.
BATCH: 122_PPA7.*/

#include<stdio.h>
void main()
{	
	char str[100];
	int i=0,count=0;
	printf("ENTER A STRING:\n");
	fgets(str,sizeof(str),stdin);	
	printf("%s",str);
	
	if(str[i]==' ')
	   count=0;
	else
	   count=1;	
	while(str[i]!='\0')
	{
	
	while(str[i]==' '&&str[i+1]==' ')
	{
	i++;
	}
	
	if(str[i]==' '&&str[i+1]=='\n')
	break;
	else if(str[i]==' '&&str[i+1]!=' ')
	{
	count++;
	i++;
	}
	else
	i++;

	}
	printf("NUMBER OF WORDS=%d",count);
}
