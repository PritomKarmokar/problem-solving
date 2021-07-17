#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int tc;
    cin>>tc;

    while(tc--){
        int n;
        cin>>n;

        char grid[n+1][n+1];
        int x[2] , y[2];
        int k = 0;
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1; j <= n ; j++){
                cin>>grid[i][j];
                if(grid[i][j] == '*'){
                    x[k] = i;
                    y[k] = j;
                    k++;
                }
            }
        }

        // for(int i = 0 ; i < 2; i++) cout<<x[i]<<" "<<y[i]<<"\n";

        if(x[0] == x[1]){ // same row
            if(x[0] == n)
                grid[x[0]-1][y[0]] = '*' , grid[x[0]-1][y[1]] = '*';
            else
                grid[x[0]+1][y[0]] = '*' , grid[x[0]+1][y[1]] = '*';
        }
        else if(y[0] == y[1]){  //same column
            if(y[0] > 1)
                grid[x[0]][y[0]-1] = '*', grid[x[1]][y[0]-1] = '*';
            else    
                grid[x[0]][y[0]+1] = '*', grid[x[1]][y[0]+1] = '*';
        }
        else{
            grid[x[0]][y[1]] = '*';
            grid[x[1]][y[0]] = '*';
        }

        for(int i = 1 ; i <= n ; i++){
            for(int j = 1; j <= n ; j++){
                cout<<grid[i][j];
            }
            cout<<endl;   
        }
    }
    return 0;
}