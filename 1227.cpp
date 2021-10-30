#include <iostream>
using namespace std;
int main(){
	int m,bin,sin;
	cin >> m >> bin >> sin;
	for(int i = 0; i < m / bin; i++){
		int bo,so;
		bo = i;
		so = (m - bo * bin) / sin;
		if(so % sin == 0 and so % 2 == 0 \
		   and bo % 2 == 0 and so >= 0 \
		   and bo >= 0 ){
			cout << bo << " " << so << endl;
		}
	}
	return 0;
} 
