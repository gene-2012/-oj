#include <iostream>
using namespace std;
int main(){
	int n,m,s,p = 0;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cin >> m;
	for(int i = m - 1; i < n; i++){
		a[i] = a[i + 1];
		//p++;
	}
	for(int i = 0; i < n - 1; i++){
		cout << a[i] << " ";
	}
	return 0;
}
