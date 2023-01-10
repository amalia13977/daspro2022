//judul
//Author    : Amalia Putri Dwi Mareta
//Modify    : 9 Sept 2022

//kamus
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

float v, lp, p, l, t, s, r, phi, gp;
int br;
//v : volume
//lp: luas permukaan
//p : panjang
//l : lebar
//t : tinggi
//r : jari-jari
//s : sisi
//gp: garis pelukis
//br: bangun ruang
//phi: 3.14

//deskripsi
main ()
{
    cout << "MENGHITUNG VOLUME DAN LUAS PERMUKAAN BENDA RUANG" << endl << endl;

    cout << "BENDA RUANG" << endl;
    cout << "1. Kubus" << endl;
    cout << "2. Balok" << endl;
    cout << "3. Tabung" << endl;
    cout << "4. Bola" << endl;
    cout << "5. Kerucut" << endl << endl;

    cout << "Benda ruang ingin dihitung : "; cin >> br;
    cout << endl << endl;

    if (br==1) {
        cout << "Bangun Ruang           : Kubus" << endl;
        cout << "Masukkan nilai sisi    : "; cin >> s;

        v=s*s*s;
        lp=s*s*6;

        cout << "OUTPUT" << endl << endl;
        cout << "_______________________________________________________________________" << endl;
        cout << setw(15) << "Bangun Ruang" << setw(15) << "Sisi (cm)" << setw(15) << "Volume (cm^3)" << setw(25) << "Luas Permukaan (cm^2)" << endl;
        cout << "_______________________________________________________________________" << endl;
        cout << setw(15) << "Kubus" << setw(15) << s << setw(15) << v << setw(25) << lp << endl;
        cout << "_______________________________________________________________________" << endl;
    }
    if (br==2) {
        cout << "Bangun Ruang           : Balok" << endl;
        cout << "Masukkan nilai panjang : "; cin >> p;
        cout << "Masukkan nilai lebar   : "; cin >> l;
        cout << "Masukkan nilai tinggi  : "; cin >> t;

        v=p*l*t;
        lp=(p*l+l*t+p*t)*2;

        cout << "OUTPUT" << endl << endl;
        cout << "_____________________________________________________________________________________________________" << endl;
        cout << setw(15) << "Bangun Ruang" << setw(15) << "Panjang (cm)" << setw(15) << "Lebar (cm)" << setw(15) << "Tinggi (cm)" << setw(15) << "Volume (cm^3)" << setw(25) << "Luas Permukaan (cm^2)" << endl;
        cout << "_____________________________________________________________________________________________________" << endl;
        cout << setw(15) << "Balok" << setw(15) << p << setw(15) << l << setw(15) << t << setw(15) << v << setw(25) << lp << endl;
        cout << "_____________________________________________________________________________________________________" << endl;
    }
    if (br==3) {
        cout << "Bangun Ruang               : Tabung" << endl;
        cout << "Masukkan nilai jari-jari   : "; cin >> r;
        cout << "Masukkan nilai tinggi      : "; cin >> t;

        phi=3.14;
        v=phi*r*r*t;
        lp=phi*r*2*t;

        cout << "OUTPUT" << endl << endl;
        cout << "______________________________________________________________________________________" << endl;
        cout << setw(15) << "Bangun Ruang" << setw(15) << "Jari-jari (cm)" << setw(15) << "Tinggi (cm)" << setw(15) << "Volume (cm^3)" << setw(25) << "Luas Permukaan (cm^2)" << endl;
        cout << "______________________________________________________________________________________" << endl;
        cout << setw(15) << "Tabung" << setw(15) << r << setw(15) << t << setw(15) << v << setw(25) << lp << endl;
        cout << "______________________________________________________________________________________" << endl;
    }
    if (br==4) {
        cout << "Bangun Ruang               : Bola" << endl;
        cout << "Masukkan nilai jari-jari   : "; cin >> r;

        phi=3.14;
        v=(4*phi*r*r*r)/3;
        lp=4*phi*r*r;

        cout << "OUTPUT" << endl << endl;
        cout << "_______________________________________________________________________" << endl;
        cout << setw(15) << "Bangun Ruang" << setw(15) << "Jari-jari (cm)" << setw(15) << "Volume (cm^3)" << setw(25) << "Luas Permukaan (cm^2)" << endl;
        cout << "_______________________________________________________________________" << endl;
        cout << setw(15) << "Bola" << setw(15) << r << setw(15) << v << setw(25) << lp << endl;
        cout << "_______________________________________________________________________" << endl;
    }
    if (br==5) {
        cout << "Bangun Ruang               : Kerucut" << endl;
        cout << "Masukkan nilai jari-jari   : "; cin >> r;
        cout << "Masukkan nilai tinggi      : "; cin >> t;

        phi=3.14;
        gp=sqrt(r*r+t*t);
        v=(phi*r*r*t)/3;
        lp=phi*r*r+r*gp;

        cout << "OUTPUT" << endl << endl;
        cout << "______________________________________________________________________________________" << endl;
        cout << setw(15) << "Bangun Ruang" << setw(15) << "Jari-jari (cm)" << setw(15) << "Tinggi (cm)" << setw(15) << "Volume (cm^3)" << setw(25) << "Luas Permukaan (cm^2)" << endl;
        cout << "______________________________________________________________________________________" << endl;
        cout << setw(15) << "Kerucut" << setw(15) << r << setw(15) << t << setw(15) << v << setw(25) << lp << endl;
        cout << "______________________________________________________________________________________" << endl;
    }
}
