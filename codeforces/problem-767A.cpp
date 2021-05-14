#include<bits/stdc++.h>

using namespace std;

int has[100010];

int main()
{
	int n;
	cin>>n;

	int next = n;

	while(n--){
		int x;
		cin>>x;

		has[x] = true;

		while(next > 0 && has[next] == true){
			cout<<next<<" ";
			next--;
		}
		cout<<endl;
	}
	return 0;
}