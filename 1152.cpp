#include <bits/stdc++.h>
using namespace std;
int main(){
	int b;
	cin >> b;
	int a[25];
	int max = 0,min = 327677;
	for(int i = 0; i < b; i++){
		cin >> a[i];
		if(a[i] > max){
			max = a[i];
		}
		if(a[i] < min){
			min = a[i];
		}
		
	}
	cout << max << " " << min;
	return 0;
}
