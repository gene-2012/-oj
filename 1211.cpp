#include <iostream>
using namespace std;
int main(){
	int n,m,s,p;
	cin >> n;
	int a[11];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cin >> m;
	cin >> p;
	for(int i = m - 1; i < n; i++){
		a[i + 1] = a[i];
		//p++;
	}
	for(int i = 0; i < n + 1; i++){
		cout << a[i] << " ";
	}
	return 0;
}
