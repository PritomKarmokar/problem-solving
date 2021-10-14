#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n < 2) return false;
    if(n == 2) return true;
    if(n%2 == 0) return false;
    
    int sqrtN = sqrt(n);

    for(int i = 3; i <= sqrtN ; i+=2){
        if(n%i == 0) return false;
    }
    return true;
}

int main()
{
    //freopen("input.txt","r", stdin);
    //freopen("output.txt", "w", stdout);

    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;

        if(isPrime(n)){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
        
    }
    return 0;
}