#include<bits/stdc++.h>
using namespace std;

bool check(int yr)
{
    if(yr%400 == 0 || (yr%4 == 0 && yr%100 != 0)) return 1;
    return 0;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    
    int tc;
    cin>>tc;

    for(int t = 1; t <= tc ; t++){
        int day[2], yr[2];
        string mon[2];
        char ch;

        for(int i = 0 ; i < 2; i++) cin>>mon[i]>>day[i]>>ch>>yr[i];

        if(mon[0] != "January" && mon[0] != "February") yr[0]++;
        if(mon[1] == "January" || (mon[1] == "February" && day[1] < 29)) yr[1]--;

        //cout<<yr[0]<<" "<<yr[1]<<endl;
        
        int ans = 0;
        int mul_4 = (yr[1]/4) - (yr[0]/4);
        int mul_100 = (yr[1]/100) - (yr[0]/100);
        int mul_400 = (yr[1]/400) - (yr[0]/400);

        ans = mul_4 - mul_100 + mul_400;
        //cout<<"ans = "<<ans<<endl;
        //cout<<"check(yr[0]) = "<<check(yr[0])<<endl;
        if(check(yr[0])) ans++;

        printf("Case %d: %d\n", t, ans);
    }
    return 0;
}