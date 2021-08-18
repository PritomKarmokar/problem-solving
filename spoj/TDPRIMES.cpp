#include<bits/stdc++.h>
using namespace std;

int N = 1e8 + 5;
bool status[50000010];
vector<int> prime;

void sieve()
{
    int sqrtN = sqrt(N);

    for(int i = 3; i <= sqrtN; i +=2){
        if(!status[i>>1])
            for(int j = i*i ; j <= N ; j += i+i)
                status[j>>1] = 1;
    }

    prime.push_back(2);
    int l = 1;
    for(int i = 3; i < N ; i+=2){
        if(!status[i>>1]){
            if(l > 0 and l%100 == 0){
                prime.push_back(i);
                l = 0;
            }
            l++;
        }
    }
}

int main()
{
    sieve();

    int n = prime.size();
    for(int i = 0; i < n ; i++) 
        cout<<prime[i]<<"\n";

    return 0;
}
