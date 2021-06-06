#include<bits/stdc++.h>

using namespace std;

int main()
{
	string a,b;
	cin>>a>>b;

	int v1 = 0, v2 = 0;
	int l = a.size();

	for(int i = 0 ; i < l; i++){
		v1 = tolower(a[i]); //cout<<v1<<endl;
		v2 = tolower(b[i]); //cout<<v2<<endl;
		if(v1 != v2) break;
	}

	if(v1 < v2) cout<<"-1\n";
	else if(v1 > v2) cout<<"1\n";
	else cout<<"0\n";

	return 0;
}