#include <iostream>
using namespace std;
int main(){
	int n,a[105];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n / 2; i++){
		swap(a[n - 1 - i],a[i]);
	}
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	return 0; 
} 
