#include<iostream>

#include<stdio.h>

bool data[101][101];

bool state[101];

int result[101];

int n1,n2,m,ans;


using namespace std;

void init()
{
	memset(result,0,sizeof(result)); 
	ans = 0;
	for(int i=1;i<=n1;i++)
	{
		for(int j = 1; j <= n2; j++)
		{
			int a;
			scanf("%d",&a);
			if(a ==1 ) data[i][j]=true;
		}
	}
}

bool find(int a)
{
	for(int i=1;i<=n2;i++)
	{
		if( 1 == data[a][i] && ! state[i] )
		{
			state[i] = true;
			if( result[i] == 0 || find( result[i] ) )
			{
				result[i] = a;
				return true;
			}
		}
	}
	return false;
}



int main()
{
	while(scanf("%d%d",&n1,&n2)==2)
	{
		init();
		for(int i = 1; i <= n1; i++)
		{
			memset(state,0,sizeof( state ) );
			if( find( i ) ) ans++;
		}
		if( ans == n2) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}