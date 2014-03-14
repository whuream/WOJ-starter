#include<stdio.h>
#include<iostream>

using namespace std;

void getnchar(char *str, int n)
{
	char c;
	for(int i=0;;i++)
	{
		c=getchar();
		if(c=='\n')
		{
			str[i]='\0';
			return;
		}
		str[i]=c;
	}
}

int my_strlen(char *str)
{
	int c=0;
	for(int i=0;;i++)
	{
		if(str[i]=='\0') break;
		else c++;
	}
	return c;
}

int my_strncat(char *dest, char *src, int n)
{
	int dest_len=my_strlen(dest);
	int src_len=my_strlen(src);

	int c=src_len<n?src_len:n;
	int i;

	for(i=0;i<c;i++)
	{
		dest[dest_len+i]=src[i];
	}

	dest[dest_len+i]='\0';
	return c;
}

int my_strspn(char *str, char *keys)
{
	int str_len=my_strlen(str);
	int keys_len=my_strlen(str);

	int i,j;
	for(i=0;i<str_len;i++)
	{
		for(j=0;j<keys_len;j++)
		{
			if(str[i]==keys[j]) break;
		}
		if(j==keys_len) return i;
	}
	return str_len;
}

int main()
{
	int N,i;

	scanf("%d",&N);
	//while(getchar()!='\n');
	getchar();

	for(i=0;i<N;i++)
	{
		char a[1001],b[1001],c[1001];
		int x;
		getnchar(a,1001);
		getnchar(b,1001);
		getnchar(c,1001);

		scanf("%d",&x);
		//while(getchar()!='\n');
		getchar();

		printf("%d\n",my_strlen(a));
		printf("%d ",my_strncat(a,b,x));
		printf("%s\n",a);

		printf("%d\n",my_strspn(b,c));
	}
	return 0;
}