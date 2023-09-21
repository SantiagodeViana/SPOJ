#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n;
    cin >> n;
    stack <int> pila;
    for (int i=0; i < n; i++){
        int next;
        cin >> next;
        if (next == i);
        else{
           while (!pila.empty() && pila.top() == i && i <= n){
                 pila.pop();
                 i++;
           }pila.push(next);              
        }
    }if (pila.empty()) cout << "yes" << endl;
    else cout << "no" << endl;
    }return 0;
}

        
