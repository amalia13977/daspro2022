//judul
//PROGRAM DETEKTSI PRODI MELALUI NIM
//Author    : Amalia Putri Dwi Mareta
//NIM       : A11.2022.13977
//Modify    : 06 Okt 2022

#include <iostream>
using namespace std;

//kamus
char nim[14]; //membatasi jumlah karatker NIM sebanyak 14 digit
string ulangi;

//deskripsi
main ()
{
    do
    {
        system ("cls");
        cout << "PROGRAM DETEKSI PRODI MELALUI NIM" << endl << endl;
        cout << "Masukkan NIM (xxx.xxxx.xxxxx) : "; cin >> nim;
        cout << "Berikut informasi mengenai NIM anda : " << endl;

        switch (toupper(nim[0]))  //toupper digunakan untuk menyetarakan inputan menjadi huruf besar
        {
        case 'A':{
                cout << "Fakultas       : Teknik Informatika" << endl;
                switch (nim[1])
                {
                case '1':{
                        cout << "Program Studi  : Sarjana ";
                        switch (nim[2])
                        {
                        case '1':{
                                cout << "Teknik Informatika" << endl;
                                break;
                            }
                        case '2':{
                                cout << "Sistem Informasi" << endl;
                                break;
                            }
                        case '4':{
                                cout << "Desain Komunikasi Visual" << endl;
                                break;
                            }
                        case '5':{
                                cout << "Ilmu Komunikasi" << endl;
                                break;
                            }
                        case '6':{
                                cout << "Film dan Televisi" << endl;
                                break;
                            }
                        case '7':{
                                cout << "Animasi" << endl;
                                break;
                            }
                        default:{
                                cout << "INPUTAN SALAH ATAU TIDAK TERBACA" << endl;
                                break;
                            }
                        }
                        break;
                    }
                case '2':{
                        cout << "Program Studi  : Diploma Tiga Teknik Informatika" << endl;
                        break;
                    }
                default:{
                        cout << "INPUTAN SALAH ATAU TIDAK TERBACA" << endl;
                        break;
                    }
                }
                break;
            }
        case 'B':{
                cout << "Fakultas       : Ekonomi dan Bisnis" << endl;
                switch (nim[2])
                case '1':{
                        cout << "Program Studi  : Sarjana Manajemen" << endl;
                        break;
                    }
                case '2':{
                        cout << "Program Studi  : Sarjana Akuntansi" << endl;
                        break;
                    }
                default:{
                        cout << "INPUTAN SALAH ATAU TIDAK TERBACA" << endl;
                        break;
                    }
                break;
            }
        case 'C':{
                cout << "Fakultas       : Ilmu Budaya" << endl;
                switch (nim[2])
                {
                case '1':{
                        cout << "Program Studi  : Sarjana Sastra Inggris" << endl;
                        break;
                    }
                case '2':{
                        cout << "Program Studi  : Sarjana Sastra Jepang" << endl;
                        break;
                    }
                case '3':{
                        cout << "Program Studi  : Sarjana Manajemen Perhotelan" << endl;
                        break;
                    }
                default:{
                        cout << "INPUTAN SALAH ATAU TIDAK TERBACA" << endl;
                        break;
                    }
                }
                break;
            }
        case 'D':{
                cout << "Fakultas       : Kesehatan" << endl;
                switch (nim[1])
                {
                    case '1':{
                            cout << "Program Studi  : Sarjana ";
                            switch (nim[2])
                            {
                                case 1:{
                                        cout << "Kesehatan Masyarakat" << endl;
                                        break;
                                    }
                                case 2:{
                                        cout << "Kesehatan Lingkungan" << endl;
                                        break;
                                    }
                                default:{
                                        cout << "INPUTAN SALAH ATAU TIDAK TERBACA" << endl;
                                        break;
                                    }
                            }
                            break;
                        }
                    case '2':{
                            cout << "Program Studi  : Diploma Tiga Rekam Medis dan Informasi Kesehatan" << endl;
                            break;
                        }
                    default:{
                            cout << "INPUTAN SALAH ATAU TIDAK TERBACA" << endl;
                            break;
                        }
                }
                break;
            }
        case 'E':{
                cout << "Fakultas       : Teknik" << endl;
                switch (nim[2])
                {
                    case '1':{
                            cout << "Program Studi  : Sarjana Teknik Elektro" << endl;
                            break;
                        }
                    case '2':{
                            cout << "Program Studi  : Sarjana Teknik Indrustri" << endl;
                            break;
                        }
                    case '3':{
                            cout << "Program Studi  : Sarjana Teknik Biomedis" << endl;
                            break;
                        }
                    default:{
                            cout << "INPUTAN SALAH ATAU TIDAK TERBACA" << endl;
                            break;
                        }
                }
                break;
            }
        }

        cout << "Angkatan       : " << nim[4] << nim[5] << nim[6] << nim[7] << endl;
        cout << endl;
        cout << "Ingin memasukkan inputan lain (y/n) ? "; cin >> ulangi;
        if (ulangi=="y")
        {continue;} //melanjutkan ke menu sebelumnya (mengulang perintah)
        else
        {exit(0);}
    } while (true); //sama halnya dengan menganggap bahwa 'if' adalah benar
}
