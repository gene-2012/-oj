#include <iostream>
using namespace std;
int b[105];
int main(){
	int n,max = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> b[i];
		if(b[i] > max){
			max = i;
		}
	}
	for(int i = 0; i < n; i++){
		if(b[i] == b[max]){
			cout << i + 1 << endl;
		}
	}
	return 0;
}
