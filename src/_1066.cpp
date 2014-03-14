#include<stdio.h>
#include<iostream>
#include<cmath>

#define ZERO 1e-7

using namespace std;

typedef struct tag_point
{
	double x,y;
}POINT;

typedef struct tag_circle
{
	double m,n,r;
}CIRCLE;


int in_circle(POINT p, CIRCLE c)
{
	double s=sqrt(pow((p.x-c.m),2)+pow((p.y-c.n),2));
	if(fabs(c.r-fabs(s))<ZERO) return 1;
	else if(c.r<fabs(s)) return 0;
	else return 2;
}

int main()
{
	POINT p;
	CIRCLE c;
	while(cin>>p.x>>p.y>>c.m>>c.n>>c.r)
	{
		cout<<in_circle(p,c)<<endl;
	}
	return 0;
}