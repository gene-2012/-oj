#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,j = 0;
	float ave = 0.0,ans = 0.0;
	cin >> a;
	int b[a],up[a];
	for(int i = 0; i < a; i++){
		cin >> b[i];
		ans = ans + b[i];
		
	}
	ave = ans / a;
	cout << "AVE=" << fixed << setprecision(1)<< ave << endl;
	for(int i = 0; i < a; i++){
		if(b[i] > ave){
			j++;
			cout << i + 1 << ":" << b[i] << " ";
		}
	}
	return 0;
} 
