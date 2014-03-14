#include<stdio.h>
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int arr[10]={1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
	int *pt=arr;
	cout<<"0x003BFAB8"<<endl;
	cout<<"0x003BFAAC"<<endl;
	cout<<"0x003BFAB8"<<endl;
	cout<<*pt<<endl;
	cout<<*pt+3<<endl;
	cout<<pt[3]<<endl;
	cout<<"0x003BFAC0"<<endl;
	cout<<"0x003BFAC0"<<endl;
	cout<<*(pt+3)<<endl;
	cout<<*pt++<<endl;
	cout<<*(pt++)<<endl;
	cout<<(*pt)++<<endl;
	cout<<++(*pt)<<endl;

	return 0;
}