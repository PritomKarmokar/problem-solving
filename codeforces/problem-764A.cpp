#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, z;
    cin>>n>>m>>z;


    int x = n, y = m;
    vector<int> a, b;

    for(int i = 1; x <= z ; i++){
        a.push_back(x);
        x += n;
    }

    for(int i = 1; y <= z ; i++){
        b.push_back(y);
        y += m;
    }

    
    int al = a.size();
    int bl = b.size();

    /*for(int i = 0 ; i < al ; i++) cout<<a[i]<<" ";
    cout<<endl;
    for(int i = 0 ; i < bl ; i++) cout<<b[i]<<" ";
    cout<<endl;*/

    int same = 0;

    for(int i = 0 ; i < al ; i++){
        for(int j = 0 ; j < bl ; j++){
            if(a[i] == b[j]){
                same++;
                b[j] = -1;
            }
        }
    }
    cout<<same<<"\n";
    return 0;
}