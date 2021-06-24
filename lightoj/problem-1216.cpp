#include<bits/stdc++.h>
#define pi acos(-1.0)

using namespace std;

int main()
{
	int tc;
	cin>>tc;

	for(int i = 1; i <= tc; i++){
		double r1, r2, h, p;
		cin>>r1>>r2>>h>>p;

		double l = (p * (r1 - r2)) / h;

		double r3 = r2 + l;

		double area = ((r2*r2) + (r3*r3) + (r2*r3)) ;

		area = (pi * p * area)/3.0;

		printf("Case %d: %0.9lf\n",i, area);

	}

	return 0;
}

