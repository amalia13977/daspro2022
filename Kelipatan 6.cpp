//judul
//Author    : Amalia Putri Dwi Mareta
//NIM       : A11.2022.13977
//Modify    : 09 Okt 2022

#include <iostream>
using namespace std;

//kamus
int x, z;

//deskripsi
main ()
{
    cout << "Kelipatan 6 yang kurang dari 100, yaitu :" << endl;

    x=0; //awalan
    while (x <= 100) //tujuan
    {
        x=x+6; //loncatan
        z=z+1;
        cout << z << ". " << x << endl; //apa yang diulang
    }
    return 0;
}
