#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
	    int n, m, D;
	    cin >> n >> m >> D;	
	    for (int i = 0; i < n; i++){
		    int H;
		    cin >> H;
		    m -= ((H-1)/D);
	     }
	     if (m <= 0) cout << "YES";
	     else cout << "NO";
	     cout << endl;
    }
return 0;
}
