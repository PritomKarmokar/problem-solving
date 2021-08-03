#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(true){
        int n;
        cin>>n;

        if(!n) break;
        
        int gcd = 0;

        for(int i = 1; i < n ; i++){
            for(int j = i+1; j <= n ; j++)
                gcd += __gcd(i,j);
        }

        cout<<gcd<<"\n";
    }    
    return 0;
}