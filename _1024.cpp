#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int flip(){return rand()%2;}

int main()
{
	int zheng=0,fan=0;
	for(int i=0;i<100;i++)
	{
		srand((unsigned int)(i*i+9*i+98));
		int a=flip();
		if(0==a) fan++;
		else zheng++;
		cout<<a<<' ';
	}
	cout<<endl<<zheng<<' '<<fan<<endl;
	return 0;
}