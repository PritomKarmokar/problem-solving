#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 11;
bool status[(N/2)];
vector<int> prime;

void sieve()
{
    int sqrtN = sqrt(N);
    
    for(int i = 3; i <= sqrtN ; i+=2){
        if(!status[i>>1])
            for(int j = i*i ; j <= N ; j+= i+i)
                status[j>>1] = 1;
    }

    prime.push_back(2);
    for(int i = 3; i <= N ; i+=2){
        if(!status[i>>1]) prime.push_back(i);
    }
}

int NumberOfDivisor(int n)
{
    int sqrtN = sqrt(n);
    int sum = 1;

    for(int i = 0 ; prime[i] <= sqrtN ; i++){
        if(n%prime[i] == 0){
            int cnt = 0;
            while(n%prime[i] == 0){
                n /= prime[i];
                cnt++;
            }
            cnt += 1;
            sum *= cnt;
        }
    }
    
    if(n > 1) sum *= 2;

    return sum;

}

int main()
{
    sieve();

    int tc;
    scanf("%d", &tc);

    while(tc--){
        int a, b;
        scanf("%d %d", &a, &b);

        int g = __gcd(a,b);

        int ans = NumberOfDivisor(g);

        printf("%d\n", ans);
    }

    return 0;
}