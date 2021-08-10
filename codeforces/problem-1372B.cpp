#include<bits/stdc++.h>
#define pb push_back
using namespace std;

bool check(int n)
{
    if(n == 2) return true;
    int root = sqrt(n);

    for(int i = 4; i <= root; i+=2)
        if(n%i == 0) return false;
    
    for(int i = 3 ; i <= root ; i+=2)
        if(n%i == 0) return false;
    
    return true;
}

int main()
{
    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;

        if(n%2 == 0) cout<<n/2<<" "<<n/2<<endl;
        else if(check(n)) cout<<"1 "<<n-1<<endl;
        else{
            int div = INT_MIN;
            int root = sqrt(n) + 1;

            for(int i = 2; i <= root ; i++){
                if(n%i == 0){
                    int a = n/i;
                    int b = n/a;
                    div = max(div, max(a,b));
                    //printf("a = %d, b = %d, div = %d\n", a, b, div);
                }
            }
            cout<<div<<" "<<n-div<<endl;
        }
    }
    return 0;
}