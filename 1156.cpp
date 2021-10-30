#include <iostream>
using namespace std;
int pingfang(int a){
	return a * a;
}
int main(){
	int a,j = 0;
	cin >> a;
	int b[a], c[a];
	for(int i = 0; i < a; i++){
		cin >> b[i];
		if(pingfang(b[i]) % 7 != 1){
			c[i] = b[i];
			cout << c[i] << " ";
		}
	}
	return 0;
}
