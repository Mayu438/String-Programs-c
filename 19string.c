/*Write a C program to check whether given strings are Anagram strings or not.
Eg:
Input String1:
abccd

Input String2:
cbcda

Output String:
Strings are anagram

AUTHOUR:MAYURI NARAYAN DIGHE.
BATCH:122_PPA7..*/

#include<stdio.h>
void main()
{
	char str[100],str1[100];
	int count1=0,count2=0,i=0,j=0;
	printf("ENTER FIRST STRING:\n");
	fgets(str,sizeof(str),stdin);
	printf("ENTER SECOND STRING:\n");
	fgets(str1,sizeof(str1),stdin);
	
	while(str[i]!='\n')
	{
	i++;
	}
	count1=i;
	i=0;
	
	while(str[j]!='\n')
	{
			j=0;
			while(str1[j]!='\n')
			{
				if(str[i]==str1[j])
				{
					count2++;
					str1[j]=0;
					break;
				}
				j++;
			}
	i++;
	}
	if(count1==count2)
		printf("string is anagram");

	else
		printf("string are not anagaram");
}



