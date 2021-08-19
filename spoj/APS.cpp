#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e7 + 2;
bool status[(N/2) + 1];
ll arr[N];
vector<int> prime;

void sieve()
{
    int sqrtN = sqrt(N);

    for(int i = 3; i <= sqrtN ; i+=2){
        if(!status[i>>1])
            for(int j = i*i ; j < N ; j += i+i)
                status[j>>1] = 1;
    }

    prime.push_back(2);
    for(int i = 3; i < N ; i+=2)
        if(!status[i>>1]) prime.push_back(i);
}

int SmallPrimeFactor(int n)
{
    int sqrtN = sqrt(n);
    
    for(int i = 1; prime[i] <= sqrtN ; i++){
        if(n%prime[i] == 0)
            return prime[i];
    }

    return n;
}

void solve()
{
    arr[2] = 2;
    for(int i = 3; i < N ; i+=2){
        int factor;
        if(!status[i>>1]) factor = i;
        else factor = SmallPrimeFactor(i);
        arr[i] += arr[i-2] + (ll) factor + 2;
    }
}


int main()
{   
    sieve();
    solve();

    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;
        if(n%2 == 0) arr[n] = arr[n-1] + 2;
        cout<<arr[n]<<"\n";

    }
    return 0;
}

