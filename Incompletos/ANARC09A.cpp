#include <iostream>
#include <string>
using namespace std;

int main (){
    string word;
    cin >> word;
    int len = word.length();
    int pila = 0, cant = 0;
    for (int i = 0; i < len; i++){
        if (word(i) == "{") pila ++;
        else{
             if (pila) pila --;
             else{
                  pila ++;
                  cant ++;
                  }
             }
        }
    cant += pila/2;
    cout << cant <<endl;
    return 0;
}
