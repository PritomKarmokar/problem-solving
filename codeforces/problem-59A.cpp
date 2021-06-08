#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main()
{
	fast;
	
	string word;
	cin>>word;

	int l = word.size();

	int up = 0 , low = 0;

	for(int i = 0 ; i < l ; i++){
		if(isupper(word[i])) up++;
		else low++;
	}

	if(up > low){
		for(int i = 0 ; i < l ; i++){
			word[i] = toupper(word[i]);
		}
	}
	else{
		for(int i = 0 ; i < l ; i++){
			word[i] = tolower(word[i]);
		}
	}

	cout<<word<<endl;

	return 0;
}