#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a, b;
	cin>>a>>b;

	int i = 1;
	bool flag = 1;

	while(1){
		if(i%2){
			a -= i;
			flag = 0;
		}
		else{
			b -= i;
			flag = 1;
		}
		i++;
		if(!flag and b < i){
			cout<<"Valera\n";
			break;
		}
		else if(flag and a < i){
			cout<<"Vladik\n";
			break;
		}
	}
}