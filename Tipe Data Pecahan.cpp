//judul
//Mengurutkan Tipe Data Bentuk Pecahan
//Amalia Putru Dwi Mareta
//25 Des 2022

#include <iostream>
using namespace std;

//kamus
struct pecahan {
    int pembilang;
    int penyebut;
};


int a, n, m;
int wadah, mangkok;
char c;

//deskripsi
main()
{
    cout << "MENGURUTKAN TIPE DATA BENTUK PECAHAN\n\n";
    cout << "Masukkan jumlah bilangan yang akan dimasukkan : "; cin >> a;
    cout << "Masukkan dengan format a/b!\n";
    pecahan angka[a];
    n=0;
    while(n<a){
        cout << "Masukkan nilai pecahan ke-" << n+1 << " : ";
        cin >> angka[n].pembilang >> c >> angka[n].penyebut;
        n=n+1;
    }
    cout << "\nMaka urutan pecahan dari yang terkecil adalah :\n";
    n=0;
    m=1;
    while(n<a){
        while (m<a-1){
            if(angka[n].pembilang/angka[n].penyebut<angka[m].pembilang/angka[m].penyebut){
                wadah = angka[n].pembilang;
                mangkok = angka[n].penyebut;
                angka[n].pembilang = angka[m].pembilang;
                angka[n].penyebut = angka[m].penyebut;
                angka[m].pembilang = wadah;
                angka[m].penyebut = mangkok;
            }
            m=m+1;
        }
        n=n+1;
    }
    n=0;
    while(n<a){
        cout << angka[n].pembilang << "/" << angka[n].penyebut << "\t";
        n=n+1;
    }
}
