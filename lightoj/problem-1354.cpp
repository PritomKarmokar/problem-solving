#include<bits/stdc++.h>
using namespace std;

int solve(int n)
{
    int res = 0;
    int coef = 1;

    while(n != 0){
        int r = n%10;
        res += r*coef;
        coef = coef*2;
        n /= 10;
    }
    return res;
}

int main()
{
    int tc;
    cin>>tc;

    for(int i = 1; i <= tc; i++){
        int a1, a2, b1, b2, c1, c2, d1, d2;
        
        scanf("%d.%d.%d.%d", &a1, &b1, &c1, &d1);
        scanf("%d.%d.%d.%d", &a2, &b2, &c2, &d2);

        // cout<<a1<<" "<<b1<<" "<<c1<<" "<<d1<<endl;
        // cout<<a2<<" "<<b2<<" "<<c2<<" "<<d2<<endl;

        int t1 = solve(a2);
        int t2 = solve(b2);
        int t3 = solve(c2);
        int t4 = solve(d2);

        //cout<<t1<<" "<<t2<<" "<<t3<<" "<<t4<<endl;

        if(t1 == a1 && t2 == b1 && t3 == c1 && t4 == d1){
            printf("Case %d: Yes\n",i);
        }   
        else{
            printf("Case %d: No\n", i);
        }

    }

    return 0;
}