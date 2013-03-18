#include<stdio.h>

int shiganfu(const char *format, void *ptr)
{
	return 0;
}

int main()
{
	int c,d,e,f;
	while((c=getchar())!=EOF)
	{
		if(c=='%')
		{
			d=getchar();
			if(d=='d')
			{
				while(1)
				{
					e=getchar();
					if((e!=' ')&&(e!='\n')&&(e!='\t')) break;
				}

				if(e==EOF)
				{
					printf("-1\n");
					return 0;
				}
				else if((e<'1')||(e>'9'))
				{
					printf("0\n");
					ungetc(e,stdin);
				}

				else
				{
					printf("1 %c",e);
					while(1)
					{
						e=getchar();
						if((e<'1')||(e>'9'))
						{
							printf("\n");
							ungetc(e,stdin);
							break;
						}
						printf("%c",e);
					}
				}
			}

			else if(d=='c')
			{
				e=getchar();
				if(e==EOF)
				{
					printf("-1\n");
					return 0;
				}
				else
				{
					e=getchar();
					if(e==EOF)
					{
						printf("-1\n");
						return 0;
					}
					else printf("1 %c\n",e);
				}
			}
			else if(d=='s')
			{
				while(1)
				{
					e=getchar();
					if((e!=' ')&&(e!='\n')&&(e!='\t')) break;
				}

				if(e==EOF)
				{
					printf("-1\n");
					return 0;
				}
				else if((e==' ')||(e=='\n')||(e=='\t'))	printf("1 \n");
				else
				{
					printf("1 %c",e);
					while(1)
					{
						e=getchar();
						if(e==EOF)
						{
							printf("\n");
							return 0;
						}
						else if((e==' ')||(e=='\n')||(e=='\t'))
						{
							printf("\n");
							ungetc(e,stdin);
							break;
						}
						else printf("%c",e);
					}
				}
			}
		}
		else if(c=='\\')
		{
			getchar();
			while(1)
			{
				e=getchar();
				if((e!=' ')&&(e!='\n')&&(e!='\t')) break;
			}
			ungetc(e,stdin);
			printf("0\n");
		}
	}
	return 0;
}