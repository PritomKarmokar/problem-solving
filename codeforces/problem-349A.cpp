#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i = 0 ; i < n ; i++) cin>>arr[i];

	int t1 = 0, t2 = 0;
	bool ok = 1;

	for(int i = 0 ; i < n ; i++){
		if(arr[i] == 25) t1++;
		else if(arr[i] == 50){
			t2++;
			if(t1 <= 0){
				ok = 0;
				break;
			}
			t1 -= 1;
		}
		else{
			if(t2 > 0 and t1 > 0){
				t2 -= 1;
				t1 -= 1;
			}
			else if(t1 >= 3) t1 = t1-3;
			else{
				ok = 0;
				break;
			}
		}
	}
	if(ok) cout<<"YES\n";
	else cout<<"NO\n";

	return 0;
}