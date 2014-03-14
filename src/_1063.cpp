#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *findstr(char *s, char *t)
{
	int i,j;
	int s_len=strlen(s);
	int t_len=strlen(t);
	for(i=0;i<=s_len-t_len;i++)
	{
		for(j=0;j<t_len;j++)
		{
			if(*(s+i+j)!=*(t+j)) break;
		}
		if(t_len==j) return (s+i);
	}
	return NULL;
}

int main()
{
	char *s,*t;
	s=(char *)malloc(sizeof(char)*1003);
	t=(char *)malloc(sizeof(char)*1003);
	while(scanf("%s %s",s,t)==2)
	{
		printf("%p %p\n",s,findstr(s,t));
	}
	return 0;
}

