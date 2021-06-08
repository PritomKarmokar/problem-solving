#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main()
{
	fast;

	int n, k;
	cin>>n>>k;

	for(int i = 0 ; i < k ; i++){
		if(n%10){
			if(n > 0) n -= 1;
		}
		else{
			n = n/10;
		}
	}

	cout<<n<<endl;
	
	return 0;
}