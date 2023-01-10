//judul
//Program Menentukan Jari-jari Lingkaran Terbesar
//Programmer    : Amalia Putri Dwi Mareta
//NIM           : A11.2022.13977
//Modify        : 11 Sept 2022

//kamus
#include <iostream>
using namespace std;

float rA, rB;

//deskripsi
int main ()
{
    cout << "Menentukan jari-jari lingkaran mana yang lebih besar" << endl;
    cout << "Jari-jari lingkaran A adalah ";
    cin >> rA;

    rB = rA-15;

    cout << "Jari-jari lingkaran B adalah " << rB << endl;

    if (rA > rB)
    {
        cout << "Maka, jari-jari lingkaran A lebih besar daripada lingkaran B.";

    }
    else
    {
        cout << "Maka, jari-jari lingkaran B lebih besar daripada lingkaran A";
    }
}

