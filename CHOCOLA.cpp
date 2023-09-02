#include <iostream>
using namespace std;

int main (){
    priority-queue <int> hor, ver;
    int n, m, cant_h, cant_v;
    cin >> n >> m;
    for (int i=0; i < n; i++){
        int next;
        cin >> next;
        nor.enqueue (-next);
    }
    for  (int i=0; i < m; i++){
         int next;
         cin >> next;
         ver.enqueue(-next);
         }
    cant-h = cant- r = 1;
    }  
    while (!hor.empty() && !ver.empty()){
          int x, y;
          x = hor.peek();
          y = ver.peek();
          if (x<y){
             costo_t= (-x)*cant_v
             cant_h++;
             hor.dequeue();
          }else{
                costo += (-y) * cant_h;
                cant_v++;
                ver.dequeu();
          }
    }
    return 0
}
          
