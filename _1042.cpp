#include<iostream>
#include<stdio.h>

using namespace std;

int data[20000];

int binary_search(int d[], int s, int e, int q)
{
	int _s=s,_e=e-1;
	while(_s<=_e)
	{
		int in=(_s+_e)/2;
		if(q==d[in]) return in;
		else if(q<d[in]) _e=in-1;
		else _s=in+1;
	}
	return -1;
}

int main()
{
	int N,i;
	//cin>>N;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		//cin>>data[i];
		scanf("%d",&data[i]);
	}
	int M;
	//cin>>M;
	scanf("%d",&M);
	for(i=0;i<M;i++)
	{
		int s,e,q;
		//cin>>s>>e>>q;
		scanf("%d%d%d",&s,&e,&q);
		if(q<data[s]||q>data[e-1]) 
			//cout<<-1<<endl;
			printf("-1\n");
		else 
			//cout<<binary_search(data,s,e,q)<<endl;
			printf("%d\n",binary_search(data,s,e,q));
	}
	return 0;
}