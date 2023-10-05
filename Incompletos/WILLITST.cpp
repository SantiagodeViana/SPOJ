#include <iostream>
using namespace std;

int main(){
    int n, i;    
    cin >> n;
    int anchor[100000];
    bool loop = false;
    while ((n > 1) && loop == false){
          if (n%2 == 0){
             anchor[i] = n;
             i++;
             n = (n/2);
          }else{
             anchor[i] = n;
             i++;
             n = (3*n+3);
          }
          for (int j = 0; j < i; j++){
              if (n == anchor[j]) loop = true;
          }
    }if (n <= 1) cout << "TAK" << endl;
    else cout << "NIE" << endl;
    return 0;
}
