#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0);

	string word;
	cin>>word;

	if(islower(word[0])){
		word[0] = toupper(word[0]);
	}
	cout<<word<<endl;
}