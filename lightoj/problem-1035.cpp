#include<bits/stdc++.h>
using namespace std;

const int N = 1005;
bool status[(N/2)];
vector<int> prime;

void sieve()
{
    int sqrtN = sqrt(N);
    for(int i = 3; i <= sqrtN ; i+=2){
        if(!status[i>>1])
            for(int j = i*i; j <= N ; j+= i+i)
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

    for(int t = 1; t <= tc; t++){
        int n;
        cin>>n;
        int cnt[105] = {0};
        set<int> st;

        for(int i = 2; i <= n; i++){
            int m = i;
            for(int j = 0; prime[j] <= m ; j++){
                if(m%prime[j] == 0){
                    st.insert(prime[j]);
                    while(m%prime[j] == 0){
                        m /= prime[j];
                        cnt[prime[j]]++;
                    }
                }
            }
        }

        
        int l = (int)st.size();
        int p = 0;

        printf("Case %d: %d = ", t, n);
        for(int i = 0; i < 105; i++){
            if(cnt[i]){
                p++;
                printf("%d (%d)", i , cnt[i]);
                if(p < l) printf(" * ");
            }
        }
        printf("\n");

    }

    return 0;
}