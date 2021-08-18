/*Write a C program to count count of number of vowels and number of consonants in the given
string.

AUTHOUR:MAYURI NARAYAN DIGHE
BATCH:122_PPA7 */

#include<stdio.h>
void main()
{
	char str[100];
	int i=0,vowels=0,consonant=0;
	printf("ENTER A STRING:\n");
	fgets(str,sizeof(str),stdin);
	printf("%s",str);

	while(str[i]!='\n')
	{
	if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
	{
	vowels++;
	}
	else if(str[i]==' ')
	{
	i++;
	}
	else
	{
	consonant++;
	}
	i++;
	}
	printf("%d vowels %d consonant",vowels,consonant);
	
}
