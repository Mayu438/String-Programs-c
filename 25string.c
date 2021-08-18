/*Write a C program which accept two strings from user and compare two strings. If both strings are
equal then return 0 otherwise return difference between first mismatch character.
Eg:
Input String1:
India is my country.
Input String2:
India is my country.
Output:
Both strings are equal.

AUTHOUR:MAYURI NARAYAN DIGHE.
BATCH:PPA7..*/

#include<stdio.h>
void main()
{
	char str[100],str1[100];
	int i=0,flag;
	
	printf("ENTER A 1ST STRING:\n");
	fgets(str,sizeof(str),stdin);
	printf("ENTER A 2ST STRING:\n");
	fgets(str1,sizeof(str1),stdin);
	
	while(str[i]!='\n')
	{
		flag=1;
		if(str[i]==str1[i])
		flag=0;
		if(flag==1)
		break;
		
		i++;
	}
	if(flag==1)
	printf("mismatched between %c of 1st & %cof 2nd string",str[i],str1[i]);
	else
	printf("BOTH STRING ARE EQUAL");
}









