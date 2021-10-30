#include <bits/stdc++.h>
using namespace std;
float dazhe(int a){
	if(a > 100)
	    return float(a - 100) * 0.9 + 100.00;
	else
	    return a;
}
int main(){
	int a,ans = 0;
	float b;
	cin >> a;
	int c[a];
	for(int i = 0; i < a; i++){
		cin >> c[i];
		ans = ans + c[i];
	}
	ans = dazhe(ans);
	cout << fixed << setprecision(2) << ans;
	return 0;
	
}
