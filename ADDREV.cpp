#include <iostream>
using namespace std;

int inv (int n){
    int r = 0;
    while (n){
          r = (r*10) + (n/10);
          n /= 10;
    }
    return r;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int a, b; 
        cin >> a, b;
        cout << (inv(a) + inv(b)) << endl;
	}return 0;
}
