#include<bits/stdc++.h>
using namespace std;

int arr[1005];

void solve()
{
    int l = 0;
    for(int i = 1; ; i++){
        if(i%3 == 0 or i%10 == 3) continue;
        else{
            arr[l] = i;
            l++;
        }
        if(l >= 1000) break;
    }
}

int main()
{
    //freopen("input.txt","r", stdin);
    //freopen("output.txt","w", stdout);

    solve();
        
    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;

        cout<<arr[n-1]<<endl;
    }
    return 0;

}