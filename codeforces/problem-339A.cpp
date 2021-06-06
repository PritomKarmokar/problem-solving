#include<bits/stdc++.h>

using namespace std;

int main()
{
	string sq;
	cin>>sq;

	int cnt[105] = {0};
	int total = 0;

	for(int i = 0 ; i < sq.size(); i++){
		if(sq[i] != '+'){
			int ch = sq[i]-'0'; //cout<<ch<<endl;
			cnt[ch]++;
			total += 1;
		}
	}

	/*for(int i = 0 ; i < 10 ; i++) cout<<cnt[i]<<" ";
	cout<<endl;*/

	for(int i = 1 ; i < 105 ; i++){
		if(cnt[i] != 0){
			while(cnt[i] != 0){
				cout<<i;
				if(total > 1) cout<<"+";
				cnt[i] -= 1;
				total -= 1;
			}
		}
	}

	cout<<endl;
	return 0;
}