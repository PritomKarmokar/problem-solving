#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
 
    int sum = 0;
 
    for(int i = a; i > 0 ; i--){
        if(b >= 2*i && c >= 4*i){
            sum = 7*i;
            break;
        }
    }
    cout<<sum<<endl;
}