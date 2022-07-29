#include<bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt","r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc;
    cin>>tc;

    while(tc--){

        string str;
        double w[26];

        cin>>str;
        for(int i = 0; i < 26; i++) cin>>w[i];

        int cnt[26] = {0};
        int n = str.size();

        for(int i = 0; i < n; i++){
            char ch = str[i] - 'a';
            cnt[ch]++;
        }
        
        double tw = 0;
        double sum = 0;

        for(int i = 0; i < 26; i++){
            if(cnt[i]) {
                tw += (double) w[i];
                sum += (double) (cnt[i] * w[i]);
            }
        }

        //cout<<"sum = "<<sum<<" tw = "<<tw<<endl;

        double ans = ( 10 * sum ) / (n * tw);

        printf("%.2f\n", ans);
    }

    return 0;
}