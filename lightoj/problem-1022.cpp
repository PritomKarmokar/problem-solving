#include<bits/stdc++.h>
#define pi acos(-1.0)

using namespace std;

int main()
{
	int tc;
	cin>>tc;

	for(int i = 1; i <= tc; i++){
		double r;
		cin>>r;

		double circle_area = pi * r * r ; 
		double cube_area = 4 * r * r ; 

		double result = cube_area - circle_area ;

		printf("Case %d: %.02lf\n", i, result);
	}

	return 0;
}