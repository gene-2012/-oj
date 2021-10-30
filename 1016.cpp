#include <iostream>
using namespace std;
int main(){
	int c,d,ans,m;
	bool a = false;
	cin >> m >> c >> d;
	for(int i = 1; i < int (m / c); i++){
		if((m - i * c) % d == 0){
			 ans++;
			 a = true;
		}
	}
	if(a){
		cout << ans; 
	} else{
		cout << a;
	}
	
	return 0;
}

