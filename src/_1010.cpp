#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	double a,b;
	cin>>a>>b;
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<"请输入价格：\n支付金额：\n"<<b-a<<endl;
}