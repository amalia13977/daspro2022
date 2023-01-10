#include <iostream>
using namespace std;

int bil[10], a, n, i, j, baskom;

main()
{
    cout << "Masukkan jumlah bilangan : "; cin >> a;
    n=1;
    while(n<=a){
        cout << "Bilangan ke-" << n << " : "; cin >> bil[n];
        n=n+1;
    }
    cout << "Hasil pengurutan bilangan dari yang terkecil hingga terbesar :" << endl;
    i=1;
    while(i<=a){
        j=1;
        while(j<a){
            if(bil[i]<bil[j]){
                baskom=bil[i];
                bil[i]=bil[j];
                bil[j]=baskom;
            }
            j=j+1;
        }
        i=i+1;
    }
    i=1;
    while(i<=a){
        cout << bil[i] << " ";
        i=i+1;
    }
    cout << endl;
    i=1;
    while(i<a){
        bil[j]=bil[j]+bil[i];
        i=i+1;
    }
    cout << "Jumlah seluruh bilangan yaitu : " << bil[j] << endl;
    int x, y;
    x=1;
    bil[y]=bil[x];
    while(x<(a-1)){
        bil[y]=bil[y]*bil[x];
        x=x+1;
    }
    cout << "Hasil kali dari seluruh bilangan yaitu : " << bil[y] << endl;
}
