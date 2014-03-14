#include<stdio.h>
#include<stdlib.h>

int main()
{
	int M,N;
	while(scanf("%d %d",&M,&N)==2)
	{
		int **_old,**_new,i,j;
		//_old=(int **)malloc(sizeof(int *)*M);
		//for(i=0;i<M;i++)
			//*(_old+i)=(int *)malloc(sizeof(int)*N);
		_new=(int **)malloc(sizeof(int *)*N);
		for(i=0;i<N;i++)
			*(_new+i)=(int *)malloc(sizeof(int)*M);
		for(i=0;i<M;i++)
			for(j=0;j<N;j++)
			{
				scanf("%d",&*(*(_new+j)+i));
			}
		for(i=0;i<N;i++)
		{
			for(j=0;j<M;j++)
			{
				printf("%d ",*(*(_new+i)+j));
			}
			printf("\n");
		}
		for(i=0;i<N;i++) free(*(_new+i));
		free(_new);
	}
	return 0;
}