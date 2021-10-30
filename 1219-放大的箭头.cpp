#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i = 0; i < int(n / 2) + 1; i++){
		for(int j = 1; j <= i; j++){
			cout << " "; 
		}
		for(int k = 1; k <= n; k++){
			cout << "*";
		}
		cout << endl;
	}
	for(int i = 0; i < int(n / 2); i++){
		for(int j = 1; j < 0 - i + int(n / 2); j++){
			cout << " "; 
		}
		for(int k = 1; k <= n; k++){
			cout << "*";
		}
		cout << endl;
	}
}
