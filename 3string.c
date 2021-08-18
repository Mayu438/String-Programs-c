#include<stdio.h>
void main()
{
	char str[100];
	int count=0,i=0;
	printf("ENTER A STRING:\n");
	fgets(str,sizeof(str),stdin);
	printf("%s\n",str);

	while(str[i]!='\n')
	{
	if(str[i]==' ')
	{
	i++;
	}
	else
	{
	count++;
	i++;
	}
	}
	printf("%d",count);
	
}
