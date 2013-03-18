#include<stdio.h>

union a
{
	int l;
	char t;
};


int main()
{
	int a;
	while(scanf("%d",&a)==1)
	{
		char *p;
		p=(char *)(&a);

		for(int i=0;i<sizeof(int);i++)
		{
			int tmp=int(*(p+i));
			if(tmp==0) printf("00");
			if(tmp>0)
			{
				if(tmp<10) printf("0");
				printf("%X",tmp);
			}
			if(tmp<0)
			{
				char buf[10];
				sprintf(buf,"%X",tmp);
				printf("%c%c",buf[sizeof(int)*2-2],buf[sizeof(int)*2-1]);
			}
		}
		printf("\n");
	}
	return 0;
}