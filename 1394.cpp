#include <iostream>
using namespace std;
int main(){
	int n,x,y;
	cin >> n >> x >> y;
	for(int d = 1; d <= n / x; d++){
	    if((n - d * x) % y == 0){
	    	int t = (n - d * x) / y;
	    	if(d + t >= 5 and d > t and t > 0){
                cout << d << " " << t << endl;
			}
		}
	}
	return 0;
}
