#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int d;
	while (cin >> a >> b >> c, a | b | c){
		if ((b-a) == (c-b)){
           d = (b-a);
           cout << "AP " << (c + (b-a));
		}else{  
        cout << "GP " << (c * (b/a));
        }
	cout << endl;
	}
	return 0;
}
