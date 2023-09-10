#include <iostream>
using namespace std;

int main (){
    int t;
    cin >> t;  
    int man[5000], woman[5000];
    for (int x = 0; x < t; x++){   
        int n, bond;
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> man[i];
        }for (int j = 0; j < n; j++){
             cin >> woman[j];
        }for (int k = 0; k < n; k++){
             bond += (man[k]*woman[k]);
        }
        cout << bond << endl;
        bond = 0;  
    }return 0;
}
