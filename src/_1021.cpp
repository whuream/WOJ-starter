#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	char jia[]={'A','B','C'},yi[]={'X','Y','Z'};
	int form[6][3]={{0,1,2},{0,2,1},{1,0,2},{1,2,0},{2,0,1},{2,1,0}};
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<jia[j]<<' ';
			cout<<yi[form[i][j]]<<endl;
		}
	}
	for(int j=0;j<3;j++)
		{
			cout<<jia[j]<<' ';
			cout<<yi[form[4][j]]<<endl;
		}
	//system("pause");
	return 0;
}