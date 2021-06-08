#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main()
{
	fast;

	int year;
	cin>>year;

	year += 1;

	while(true){
		set<int> diff;

		int num = year;
		
		while(num != 0){
			int r = num%10;
			diff.insert(r);
			num /= 10;
		}
		if(diff.size() == 4) break;
		year += 1;
	}
	cout<<year<<endl;

	return 0;
}