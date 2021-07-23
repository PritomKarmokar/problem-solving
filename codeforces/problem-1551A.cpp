#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int tc;
    cin>>tc;
 
    while(tc--){
        int n;
        cin>>n;
 
        int x = n/3;
        int y = n%3;
 
        if(y == 2){
            cout<<x<<" "<<x+1<<endl;
        }
        else{
            cout<<x+y<<" "<<x<<endl;
        }
    }
}