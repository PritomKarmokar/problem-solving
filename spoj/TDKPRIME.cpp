#include<bits/stdc++.h>
using namespace std;

const int N = 1e8 + 5;
bool status[(N/2)+2];
vector<int> prime;

void sieve()
{
    int sqrtN = sqrt(N);

    for(int i = 3; i <= sqrtN ; i+=2){
        if(!status[i>>1])
            for(int j = i*i ; j <= N ; j += i+i)
                status[j>>1] = 1;
    }

    prime.push_back(2);
    for(int i = 3; i <= N ; i+=2)
        if(!status[i>>1]) prime.push_back(i);
}

int main()
{
    sieve();
    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;

        cout<<prime[n-1]<<"\n";
    }

    return 0;
}