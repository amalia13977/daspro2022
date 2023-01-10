//judul
//Program Menghitung Luas Donat
//Programmer    : Amalia Putri Dwi Mareta
//NIM           : A11.2022.13977
//Modify        : 11 Sept 2022

//kamus
#include <iostream>
using namespace std;

float pi = 3.14;
double LD, LA, LB, rA, rB;

//Deskripai
int main ()
{
    cout << "Menghitung luas donat" << endl;
    cout << "Luas lingkaran A ";
    cin >> rA;

    LA = pi*rA*rA;

    cout << "Maka luas lingkaran A adalah " << LA << endl;

    rB = rA - 15;

    cout << "Luas lingkaran B " << rB << endl;

    LB = pi*rB*rB;

    cout << "Maka luas lingkaran B adalah " << LB << endl;

    LD = LA-LB;

    cout << "Maka luas donat adalah " << LD << endl;
}
