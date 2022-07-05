#include<bits/stdc++.h>
using namespace std;

string addBinary(string a, string b)
{
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;

    string ans = "";

    while(i >= 0 || j >= 0 || carry == 1){
        if(i >= 0){
            carry += a[i] - '0';
            i--;
        }
        if(j >= 0){
            carry += b[j] - '0';
            j--; 
        }
        ans += (carry % 2 + '0');
        carry /= 2;
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{
    string a = "11", b = "1";
    string ans = addBinary(a, b);

    cout<<"ans = "<<ans<<endl;

    return 0;
}