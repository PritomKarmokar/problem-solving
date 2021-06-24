#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int tc;
	cin>>tc;
 
	while(tc--){
		int n;
		cin>>n;
 
		int p[n] , c[n], d[n];
		for(int i = 0 ; i < n ; i++) {
            cin>>p[i]>>c[i];
            d[i] = p[i]-c[i];
        }
 
		bool ok = true;
 
		if(d[0] < 0) ok = false;
		else{
			for(int i = 1; i < n ; i++){
				if(p[i-1] <= p[i] && p[i] >= c[i] && c[i] >= c[i-1] && d[i] >= d[i-1]){
					ok = true;
				}
				else{
					ok = false;
					break;
				}
			}
		}
		if(ok) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}