#include <iostream>
using namespace std;
int main(){
	int km,em,m,e,maxK = 0,minE = 0;
	cin >> m >> km >> em;
	for(int k = 1; k <= m / km; k++) {
		if((m - k * km) % em == 0){
			e = (m - k * km) / em;
			if(e > 0 and k > 0){
                if(k > maxK){
				    maxK = k;
				    minE = e;
			    }
			}
			
		}
		
	}
	cout << maxK <<" " << minE << endl;
	return 0;
}
