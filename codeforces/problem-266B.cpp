#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main()
{
	int n, t;
	cin>>n>>t;

	string w;
	cin>>w;

	for(int i = 0 ; i < t ; i++){
		for(int k = 0 ; k < n-1 ; k++){
			if(w[k] == w[k+1]) continue;
			else if(w[k] == 'B' and w[k+1] == 'G'){
				swap(w[k], w[k+1]);
				k++;
			}
		}
	}

	cout<<w<<endl;

	return 0;
}