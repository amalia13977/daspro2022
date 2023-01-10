#include <iostream>
using namespace std;

int angka[10], wadah, a, b, n;

main()
{
    angka[0]=15;
    angka[1]=24;
    angka[2]=15;
    angka[3]=24;
    angka[4]=20;
    angka[5]=15;

    cout << "Jumlah data  yang kembar :" << endl;
    a=0;
    while(a<6){
        b=a+1;
        n=1;
        while(b<6){
            if(angka[a]==angka[b]){
                n=n+1;
            }
            b=b+1;
        }
        if(n>1){
            cout << angka[a] << " = " << n << endl;
        }
        a=a+1;
    }
}
