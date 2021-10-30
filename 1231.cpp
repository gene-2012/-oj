#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,u,d;
	float ans = 0,v = 0;
	cin >> a;
	int b[a];
	for(int i = 0; i < a; i++){
		cin >> b[i];
	    ans = ans + b[i];
	}
	v = ans / a;
	for(int i = 0; i < a; i++){
		if(b[i] >= v){
			u++;
		}else{
			d++;
		}
	}
	cout << fixed << setprecision(1) << v << " " << u << " " << d;
	return 0;
} 
