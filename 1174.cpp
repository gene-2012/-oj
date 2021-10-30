#include <iostream>
using namespace std;
int main(){
	int n,b,c;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] % 2 == 0){
			b = b + a[i];
		}else{
			c = c + a[i];
		}
	}
	cout << c << endl << b;
	return 0;
} 
