#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main()
{
	int a, b;
	cin>>a>>b;

	int years = 0;

	while(a <= b){
		years += 1;
		a *= 3;
		b *= 2;
	}

	cout<<years<<endl;

	return 0;
}