//judul
//Program Perhitungan Aritmatika
//Author    : Amalia Putri Dwi Mareta
//NIM       : A11.2022.13977
//Modify    : 23 September 2022

//kamus
#include <iostream>
using namespace std;

int x, y, h;
string p;
//p         : pilihan
//x dan y   : variabel
//h         : hasil

//deskripsi

main ()
{
    cout << "PROGRAM PERHITUNGAN ARITMATIKA" << endl << endl;

    cout << "Pilih program perhitungan :" << endl;
    cout << "a. Perkalian" << endl;
    cout << "b. Pembagian" << endl;
    cout << "c. Pengurangan" << endl;
    cout << "d. Penjumlahan" << endl;
    cout << endl;
    cout << "Masukkan pilihan : "; cin >> p;

    if (p=="a") {
        cout << "Perkalian" << endl;
        cout << "Masukkan bilangan x : "; cin >> x;
        cout << "Masukkan bilangan y : "; cin >> y;

        h=x*y;

        cout << "Maka hasil dari x dikali dengan y adalah " << h;
    }
    if (p=="b") {
        cout << "Pembagian" << endl;
        cout << "Masukkan bilangan x : "; cin >> x;
        cout << "Masukkan bilangan y : "; cin >> y;

        h=x/y;

        cout << "Maka hasil dari x dibagi dengan y adalah " << h;
    }
    if (p=="c") {
        cout << "Pengurangan" << endl;
        cout << "Masukkan bilangan x : "; cin >> x;
        cout << "Masukkan bilangan y : "; cin >> y;

        h=x-y;

        cout << "Maka hasil dari x dikurang dengan y adalah " << h;
    }
    if (p=="d") {
        cout << "Penjumlahan" << endl;
        cout << "Masukkan bilangan x : "; cin >> x;
        cout << "Masukkan bilangan y : "; cin >> y;

        h=x+y;

        cout << "Maka hasil dari x ditambah dengan y adalah " << h;
        cout << endl;

        if (h%2==0) {
            cout << "Hasil dari penjumlahan x dan y merupakan bilangan genap.";
        }
        else {
            cout << "Hasil dari penjumlahan x dan y merupakan bilangan ganjil.";
        }
    }
}
