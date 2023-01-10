//judul
//DETEKSI PRODI BERDASARKAN NIM
//Author    : Amalia Putri Dwi Mareta
//NIM       : A11.2022.13977
//Modify    : 05 Okt 2022

#include <iostream>
#include <string.h>
using namespace std;

//kamus
string nim[14];

//deskripsi
main ()
{
    cout << "PROGRAM DETEKSI PRODI BERDASARKAN NIM" << endl << endl;
    cout << "Masukkan Nomor Induk Mahasiswa : "; cin >> nim;
    cout << endl;

    if (nim[0]=="A")
    {
        cout << "Fakultas   : Ilmu Komputer" << endl;
    }
    else
    {
        cout << "blabla";
    }
}
