#include<bits/stdc++.h>
using namespace std;

int main()
{
    int hh, mm, h, d, c, n;
    cin>>hh>>mm>>h>>d>>c>>n;

    double ans;

    if(hh >= 20){
        int t = (h+n-1)/n ; 
        ans = t*c*0.8;
    }
    else{
        int h1 = 20-(hh+1);
        int m1 = 60-mm;
        int t_min = (h1*60) + m1;
        int H = h + (t_min*d);
        int t1 = (H+n-1)/n;
        double ans1 = t1*c*0.8;
        int t2 = (h+n-1)/n;
        double ans2 = t2*c;

        //cout<<"ans1 = "<<ans1<<" ans2 = "<<ans2<<endl;
        ans = min(ans1,ans2);
        
    }
    cout<<fixed<<setprecision(4)<<ans<<endl;

    return 0;
}