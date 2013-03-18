#include<cstdio>
#include<cmath>

#define eps 1e-7

using namespace std;

bool eqzero(double a)
{
	return a <= eps && a >= -eps;
}

int main()
{
	int N, i;
	double a, b, c;
	scanf("%d", &N);
	for(i = 1;i <= N;i ++)
	{
		scanf("%lf%lf%lf", &a, &b, &c);
		printf("Case %d: ", i);
		if(eqzero(a))
		{
			if(eqzero(b)) printf("NULL\n");
			else 
			{
				double tmp = -c / b;
				printf("%.2f\n",tmp);
			}
		}
		else
		{
			if(b*b-4*a*c<0) printf("NULL\n");
			else if(b*b-4*a*c==0)
			{
				double tmp = -b / (2.0 * a);
				printf("%.2f\n", tmp);
			}
			else
			{
				double tmp1 = (-b-sqrt(b*b-4.0*a*c))/(2*a);
				double tmp2 = (-b+sqrt(b*b-4.0*a*c))/(2*a);
				if(tmp1 > tmp2)
					printf("%.2f %.2f\n", tmp2, tmp1);
				else
					printf("%.2f %.2f\n", tmp1, tmp2);
			}
		}
	}
	return 0;
}