//Judul
//INPUT NAMA DAN JENIS KELAMIN
//Author    : Amalia Putri Dwi Mareta
//NIM       : A11.2022.13977
//Modify    : 22 September 2022

//kamus
#include <iostream>
#include <string.h>
using namespace std;

string nm, jk;

//nm    : nama
//jk    : jenis kelamin

//deskripsi
main ()
{
    cout << "Masukkan nama panggilan : "; cin >> nm;
    cout << "Masukkan jenis kelamin (P/L) : "; cin >> jk;

    if (jk == "p" || jk == "P") {
        cout << "Halo " << nm << ", jenis kelamin perempuan.";
    }
    if (jk == "l" || jk == "L") {
        cout << "Halo " << nm << ", jenis kelamin laki-laki.";
    }
}
