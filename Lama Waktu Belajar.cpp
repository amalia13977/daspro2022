//judul
//Program Menghitung Data Diri
//Programmer    : Amalia Putri Dwi Mareta
//NIM           : A11.2022.13977
//Modify        : 11 Sept 2022

//Kamus
#include <iostream>
using namespace std;

int jam1, menit1, detik1, jam2, menit2, detik2, jam3, menit3, detik3, sum1, sum2, result, a;
//a = sisa result dibagi 3600
char c;

//Deskripsi
int main ()
{
    cout << "Menghitung lama waktu belajar dalam format 24 jam" << endl;
    cout << "Jam mulai belajar adalah ";
    cin >> jam1 >> c >> menit1 >> c >> detik1;

    cout << "Jam selesai belajar adalah ";
    cin >> jam2 >> c >> menit2 >> c >> detik2;

    if (jam1 > 23 || menit1 > 59 || detik1 > 59)
    {
        cout << "Penulisan jam salah";
        return 0;
    }

    if (jam2 > 23 || menit2 > 59 || detik2 > 59)
    {
        cout << "Penulisan jam salah";
        return 0;
    }

    if (jam1 < jam2)
    {
        sum1 = jam1 * 3600 + menit1 * 60 + detik1;
        sum2 = jam2 * 3600 + menit2 * 60 + detik2;
        result = sum2 - sum1;
        jam3 = result / 3600;
        a = result % 3600;
        menit3 = a / 60;
        detik3 = a % 60;
    }

    if (jam1 > jam2)
    {
        sum1 = jam1 * 3600 + menit1 * 60 + detik1;
        sum2 = (jam2 + 24) * 3600 + menit2 * 60 + detik2;
        result = sum2 - sum1;
        jam3 = result / 3600;
        a = result % 3600;
        menit3 = a / 60;
        detik3 = a % 60;
    }

    cout << "Jadi, lama waktu belajar adalah " << jam3 << ":" << menit3 << ":" << detik3;
}
