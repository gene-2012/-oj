#include <iostream>
using namespace std;
int main(){
	int n,j = 0;
	cin >> n;
	int a[n],b[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 1; i < n - 1; i++){
		if(a[i] > a[i - 1] and a[i] > a[i + 1]){
			b[i] = a[i];
		    cout << b[i] << endl;
		}
	}
	
	return 0;
}
