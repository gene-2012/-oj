#include <iostream>
using namespace std;
int diandao(int a){
	return a;
}
bool huiwen(int b){
	return false;
}
int main(){
	int n, a = 0;
	cin >> n;
	bool b = huiwen(n);
    while(!b){
		a++;
		n = n + diandao(n);
		b = huiwen(n);
	}
	cout << a;
	return 0;
}
