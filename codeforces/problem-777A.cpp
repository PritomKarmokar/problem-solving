#include<bits/stdc++.h>

using namespace std;

int main()
{
	int pos[6][3];

	int digit[3] = {0,1,2};

	pos[0][0] = 0;
	pos[0][1] = 1;
	pos[0][2] = 2;

	for(int i = 1 ; i < 6 ; i++){
		if(i%2) swap(digit[0],digit[1]);
		else swap(digit[1],digit[2]);

		for(int j = 0 ; j < 3 ; j++)
			pos[i][j] = digit[j];
	}

	// for(int i = 1 ; i <= 6 ; i++){
	// 	for(int j = 0 ; j < 3 ; j++)
	// 		cout<<pos[i][j]<<" ";
	// 	cout<<endl;
	// }

	int n, x;
	cin>>n>>x;

	int move = n%6;

	cout<<pos[move][x]<<endl;

	return 0;
}