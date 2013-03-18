#include<stdio.h>
#include<stdlib.h>

int substitute(char *str, char oldchar, char newchar)
{
	int count=0;
	for(int i=0;;i++)
	{
		if(*(str+i)=='\0') break;
		if(*(str+i)==oldchar)
		{
			*(str+i)=newchar;
			count++;
		}
	}
	return count;
}

int main()
{
	char *str=(char *)malloc(sizeof(char)*1009),oldchar,newchar;
	while(scanf("%s %c %c",str,&oldchar,&newchar)==3)
	{
		printf("%d ",substitute(str,oldchar,newchar));
		printf("%s\n",str);
	}
	return 0;
}