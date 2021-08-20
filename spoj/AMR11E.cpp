#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
bool status[N];
vector<int> prime;
vector<int> v;

void sieve()
{
    int sqrtN = sqrt(N);

    for(int i = 3; i <= sqrtN ; i+=2){
        if(!status[i])
            for(int j = i*i ; j <= N ; j += i+i)
                status[j] = 1;
    }

    prime.push_back(2);
    for(int i = 3; i <= N ; i+=2)
        if(!status[i]) prime.push_back(i);
}

bool check(int n)
{
    int sqrtN = sqrt(n);
    int cnt = 0;

    for(int i = 0 ; prime[i] <= sqrtN ; i++){
        if(n%prime[i] == 0){
            cnt++;
            while(n%prime[i] == 0)
                n /= prime[i];
        }
    }

    if(cnt >= 3 || (cnt == 2 && n>1)) return 1;
    return 0;
}

void solve()
{
    for(int i = 1; i <= N ; i++){
        if(check(i)){
            v.push_back(i);
        }
        if((int)v.size() >= 1000) break;
    
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

        cout<<v[n-1]<<endl;
    }

    return 0;
}