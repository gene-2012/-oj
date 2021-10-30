#include <iostream>
using namespace std;
int main(){
	int n,g = 0;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] >= 90){
			g++;
		}
	}
	cout << g;
	return 0;
} 
