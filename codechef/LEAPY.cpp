#include<bits/stdc++.h>

using namespace std;

bool check(int yr)
{
	if(yr%400 == 0) return 1;
	else if(yr%100 == 0) return 0;
	else if(yr%4 == 0) return 1;
	else return 0;
}

int main()
{
	int tc;
	cin>>tc;

	while(tc--){
		int yr;
		cin>>yr;

		if(check(yr)) cout<<"It is a leap year.\n";
		else{
			int k ;
			for(k = yr+1; k <= yr+100 ; k++){
				//cout<<"k = "<<k<<endl;
				if(check(k)) break;
			}
			cout<<"Not a leap year. Suggested: "<<k<<endl;
		}
	}

	return 0;
}