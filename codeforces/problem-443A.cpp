#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	getline(cin,str);

	int l = str.size();

	set<char> st;

	for(int i = 0 ; i < l ; i++){
		char ch = str[i];
		if(ch == ' ' || ch == ',' || ch == '{' || ch == '}')
			continue;
		st.insert(ch);
	}

	int ans = st.size();

	cout<<ans<<endl;
	
}