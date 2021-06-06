#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	
    int tc;
    cin>>tc;
 
    int value = 0;
 
    string op;
 
    while(tc--){
        cin>>op;
 
        if(op == "X++" or op == "++X") value += 1;
        else value -= 1;
    }
 
    cout<<value<<endl;
 
    return 0;
}
