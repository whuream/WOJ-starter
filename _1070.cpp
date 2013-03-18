#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int a,b,c;
	while(cin>>a>>b>>c)
	{
		if((a+b>c)&&(a+c>b)&&(b+c>a))
		{
			if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
				cout<<"right ";
			else if((a*a+b*b<c*c)||(a*a+c*c<b*b)||(b*b+c*c<a*a))
				cout<<"obtuse ";
			else cout<<"acute ";

			if((a==b)&&(a==c))
				cout<<"equilateral\n";
			else if((a==b)||(a==c)||(b==c))
				cout<<"isosceles\n";
			else cout<<"scalene\n";
		}
		else cout<<"not a triangle\n";
	}
	return 0;
}