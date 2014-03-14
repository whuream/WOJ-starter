#include<stdio.h>

void getnchar(char *str, int n)
{
	char c;
	int i;
	for(i=0;;i++)
	{
		c=getchar();
		if(c=='\n')
		{
			if(i<n) str[i]='\0';
			break;
		}
		else if(i<n-1) str[i]=c;
		else if(i==n-1) str[i]='\0';
	}
}

int my_strlen(char *str)
{
	int c=0,i;
	for(i=0;;i++)
	{
		if(str[i]=='\0') return c;
		c++;
	}
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
	int keys_len=my_strlen(keys);

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
	int N,i,x;
	char a[1000],b[1000],c[1000];

	scanf("%d",&N);
	getchar();
	for(i=0;i<N;i++)
	{
		getnchar(a,120);
		getnchar(b,120);
		getnchar(c,120);

		scanf("%d",&x);
		getchar();

		printf("%d\n",my_strlen(a));

		printf("%d ",my_strncat(a,b,x));
		printf("%s\n",a);

		printf("%d\n",my_strspn(b,c));
	}
	return 0;
}