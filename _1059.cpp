#include<stdio.h>
#include<string.h>

int strdiff(char *a,char *b)
{
	int a_len=strlen(a);
	//int b_len=strlen(b);
	for(int i=0;i<=a_len;i++)
	{
		if(*(a+i)!=*(b+i))
			return *(a+i)-*(b+i);
	}
	return 0;
}

int main()
{
	char a[1003],b[1003];
	while(scanf("%s %s",a,b)==2)
	{
		printf("%d\n",strdiff(a,b));
	}
	return 0;
}