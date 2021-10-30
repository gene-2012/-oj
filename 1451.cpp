#include <iostream>
using namespace std;
int main(){
	int k,p;
	for(int i = 1; i < 5; i++){
		p = i;
		if((40 - p * 8) % 3 == 0){
			k = (40 - p * 8) / 3;
			cout << p << " " << k << endl;
		}
	}
	return 0;
}
