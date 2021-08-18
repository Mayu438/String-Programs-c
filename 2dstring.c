#include<stdio.h>
#include<stdlib.h>
void main()
{
	char* str=NULL;
	char ch;
	int i=0,len=1;

	str=(char*)malloc(sizeof(char));
	*(str+0)='\0';
	printf("plese enter a string:\n");
	do
	{
		scanf("%c",&ch);
		if(ch!='\n')
		{
			len++;
			str=(char*)realloc(str,len * sizeof(char));
			*(str+i)=ch;
			*(str+(i+1))='\0';
			i++;
		}
	}while(ch!='\n');
	printf("%s",str);
}
