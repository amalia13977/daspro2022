//judul
//Pembuktian Segitiga Siku-siku
//Oleh Amalia Putri Dwi MAreta
//11 Sept 2022

#include <iostream>
#include <math.h>
using namespace std;

//kamus
//a = alas, b = tinggi, c = hipotenusa
float a, b, c;
int x;

//deskripsi
int main ()
{
    cout << "Membuktikan segitiga siku-siku" << endl;
    cout << "Masukkan alasnya: " ;
    cin >> a;

    cout << "Masukkan tingginya: " ;
    cin >> b;

    c = sqrt (a*a + b*b) ;

    cout << "Jadi hipoenusanya adalah: " << c << endl;

    if (c==round)
    {
        cout << "Segitiga tersebut merupakan segitiga siku-siku" ;
    }
    else
    {
        cout << "Segitiga tersebut bukan segitiga siku-siku" ;
    }
    return 0;
}

