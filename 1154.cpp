#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,d;
	bool found = false;
	cin >> a;
	int c[a];
	for(int i = 0; i < a; i++){
		cin >> c[i];
	}
	cin >> b;
	for(int i = 0; i < a; i++){
		if(c[i] == b){
			d = i + 1;
			cout << d;
			found = true;
			break;
		}
	}
	if(!found){
		cout << "-1";
	}
	return 0;
}
