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

    while(true){
        int n;
        cin>>n;

        if(!n) break;

        int cnt[105] = {0};

        for(int i = 2; i <= n; i++){
            int m = i;
            for(int j = 0; prime[j] <= m ; j++){
                if(m%prime[j] == 0){
                    while(m%prime[j] == 0){
                        m /= prime[j];
                        cnt[prime[j]]++;
                    }
                }
            }
        }

        int sp = 5;
        int t = 0;

        printf("%3d! =", n);
        for(int i = 0; i < 105; i++){
            if(cnt[i]){
                t++;
                if(t > 15){
                    printf("\n");
                    for(int i = 0; i <= sp ; i++) printf(" ");
                    t = 0;
                }
                printf("%3d", cnt[i]);
            }
        }
        puts("");

    }

    return 0;
}