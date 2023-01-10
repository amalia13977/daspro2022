//judul
//SIMULASI SISTEM PENILAIAN
//Author    : Amalia Putri Dwi Mareta
//NIM       : A11.2022.13977
//Modify    : 13 Okt 2022

#include <iostream>
#include <string>
using namespace std;

//kamus
string nim, ndw, nm, prodi, mk1, mk2, mk3, mk4, mk5, mk6, mk7, tp1, tp2, tp3, tp4, tp5, tp6, tp7, ulang;
int sks1, sks2, sks3, sks4, sks5, sks6, sks7, semester, jmk;
float sa1, sa2, sa3, sa4, sa5, sa6, sa7, ips;

int ptt1, putst1, puast1, ptp1, putsp1, puasp1;
float ntt1, nutst1, nuast1, ntp1, nutsp1, nuasp1;

int ptt2, putst2, puast2, ptp2, putsp2, puasp2;
float ntt2, nutst2, nuast2, ntp2, nutsp2, nuasp2;

int ptt3, putst3, puast3, ptp3, putsp3, puasp3;
float ntt3, nutst3, nuast3, ntp3, nutsp3, nuasp3;

int ptt4, putst4, puast4, ptp4, putsp4, puasp4;
float ntt4, nutst4, nuast4, ntp4, nutsp4, nuasp4;

int ptt5, putst5, puast5, ptp5, putsp5, puasp5;
float ntt5, nutst5, nuast5, ntp5, nutsp5, nuasp5;

int ptt6, putst6, puast6, ptp6, putsp6, puasp6;
float ntt6, nutst6, nuast6, ntp6, nutsp6, nuasp6;

int ptt7, putst7, puast7, ptp7, putsp7, puasp7;
float ntt7, nutst7, nuast7, ntp7, nutsp7, nuasp7;

int pt1, pp1, pt2, pp2, pt3, pp3, pt4, pp4, pt5, pp5, pt6, pp6, pt7, pp7;
string prd1, prd2, prd3, prd4, prd5, prd6, prd7;N

//deskripsi
main ()
{
    system ("cls");
    cout << "                           SISTEM PENILAIAN" << endl;
    cout << "                     UNIVERSITAS DIAN NUSWANTORO" << endl;
    cout << "___________________________________________________________________" << endl << endl;
    cout << "                                                   Semester : "; cin >> semester;
    cout << endl;
    cout << "Nama Mahasiswa     : "; cin.ignore(); getline(cin, nm);
    cout << "NIM                : "; getline(cin, nim);
    switch (toupper(nim[0]))  //toupper digunakan untuk menyetarakan inputan menjadi huruf besar
        {
        case 'A':{
                cout << "Fakultas           : Ilmu Komputer" << endl;
                switch (nim[1])
                {
                case '1':{
                        cout << "Program Studi      : Sarjana ";
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
                        cout << "Program Studi      : Diploma Tiga Teknik Informatika" << endl;
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
                cout << "Fakultas           : Ekonomi dan Bisnis" << endl;
                switch (nim[2])
                case '1':{
                        cout << "Program Studi      : Sarjana Manajemen" << endl;
                        break;
                    }
                case '2':{
                        cout << "Program Studi      : Sarjana Akuntansi" << endl;
                        break;
                    }
                default:{
                        cout << "INPUTAN SALAH ATAU TIDAK TERBACA" << endl;
                        break;
                    }
                break;
            }
        case 'C':{
                cout << "Fakultas           : Ilmu Budaya" << endl;
                switch (nim[2])
                {
                case '1':{
                        cout << "Program Studi      : Sarjana Sastra Inggris" << endl;
                        break;
                    }
                case '2':{
                        cout << "Program Studi      : Sarjana Sastra Jepang" << endl;
                        break;
                    }
                case '3':{
                        cout << "Program Studi      : Sarjana Manajemen Perhotelan" << endl;
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
                cout << "Fakultas           : Kesehatan" << endl;
                switch (nim[1])
                {
                    case '1':{
                            cout << "Program Studi      : Sarjana ";
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
                            cout << "Program Studi      : Diploma Tiga Rekam Medis dan Informasi Kesehatan" << endl;
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
                cout << "Fakultas           : Teknik" << endl;
                switch (nim[2])
                {
                    case '1':{
                            cout << "Program Studi      : Sarjana Teknik Elektro" << endl;
                            break;
                        }
                    case '2':{
                            cout << "Program Studi      : Sarjana Teknik Indrustri" << endl;
                            break;
                        }
                    case '3':{
                            cout << "Program Studi      : Sarjana Teknik Biomedis" << endl;
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
    cout << "Dosen Wali         : "; getline(cin, ndw);
    cout << "Jumlah Mata Kuliah : "; cin >> jmk;
    cout << "___________________________________________________________________" << endl << endl;

    cout << "REKAP NILAI" << endl;
    cout << "___________________________________________________________________" << endl << endl;
    cout << "1. Mata Kuliah             : "; cin.ignore(); getline(cin, mk1);
    cout << "   Jumlah SKS              : "; cin >> sks1;
    cout << "   Teori/Praktikum (t/p/tp): "; cin >> tp1;
    cout << endl;
    if (tp1=="t"){
        do{
            cout << "   Input Nilai" << endl;
            cout << "   a. Nilai tugas teori    : "; cin >> ntt1;
            cout << "   b. Nilai UTS teori      : "; cin >> nutst1;
            cout << "   c. Nilai UAS teori      : "; cin >> nuast1;
            cout << endl;
            cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
            cout << "   a. Persen tugas teori   : "; cin >> ptt1;
            cout << "   b. Persen UTS teori     : "; cin >> putst1;
            cout << "   c. Persen UAS teori     : "; cin >> puast1;

            if (ptt1+putst1+puast1!=100){
                cout << endl;
                cout << "   INPUTAN SALAH" << endl;
                cout << "   Jumlah persentase kurang dari atau lebih dari 100%" << endl;
                cout << "   Masukkan inputan ulang" << endl;
                cout << endl;
            }
        }while (ptt1+putst1+puast1!=100);

        sa1=(ntt1*ptt1)/100+(nutst1*putst1)/100+(nuast1*puast1)/100;
    }
    else if (tp1=="p"){
        do{
            cout << "   Input Nilai" << endl;
            cout << "   a. Nilai tugas praktikum: "; cin >> ntp1;
            cout << "   b. Nilai UTS praktikum  : "; cin >> nutsp1;
            cout << "   c. Nilai UAS praktikum  : "; cin >> nuasp1;
            cout << endl;
            cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
            cout << "   a. Persen tugas praktikum: "; cin >> ptp1;
            cout << "   b. Persen UTS praktikum  : "; cin >> putsp1;
            cout << "   c. Persen UAS praktikum  : "; cin >> puasp1;

            if (ptp1+putsp1+puasp1!=100){
                cout << endl;
                cout << "   INPUTAN SALAH" << endl;
                cout << "   Jumlah persentase kurang dari atau lebih dari 100%" << endl;
                cout << "   Masukkan inputan ulang" << endl;
                cout << endl;
            }
        }while (ptp1+putsp1+puasp1!=100);

        sa1=(ntp1*ptp1)/100+(nutsp1*putsp1)/100+(nuasp1*puasp1)/100;
    }
    else{
        do{
            cout << "   Input Nilai (Teori)" << endl;
            cout << "   a. Nilai tugas teori    : "; cin >> ntt1;
            cout << "   b. Nilai UTS teori      : "; cin >> nutst1;
            cout << "   c. Nilai UAS teori      : "; cin >> nuast1;
            cout << endl;
            cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
            cout << "   a. Persen tugas teori   : "; cin >> ptt1;
            cout << "   b. Persen UTS teori     : "; cin >> putst1;
            cout << "   c. Persen UAS teori     : "; cin >> puast1;
            cout << endl;
            cout << "   Input Nilai (Ptaktikum)" << endl;
            cout << "   a. Nilai tugas praktikum: "; cin >> ntp1;
            cout << "   b. Nilai UTS praktikum  : "; cin >> nutsp1;
            cout << "   c. Nilai UAS praktikum  : "; cin >> nuasp1;
            cout << endl;
            cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
            cout << "   a. Persen tugas praktikum: "; cin >> ptp1;
            cout << "   b. Persen UTS praktikum  : "; cin >> putsp1;
            cout << "   c. Persen UAS praktikum  : "; cin >> puasp1;

            if (ptt1+putst1+puast1==100 && ptp1+putsp1+puasp1==100){
                cout << "Persentase nilai teori untuk menentukan skor akhir     : "; cin >> pt1;
                cout << "Persentase nilai praktikum untuk menentukan skor akhir : "; cin >> pp1;
                sa1=pt1*((ntt1*ptt1)/100+(nutst1*putst1)/100+(nuast1*puast1)/100)/100+pp1*((ntp1*ptp1)/100+(nutsp1*putsp1)/100+(nuasp1*puasp1)/100)/100;
            }
            else if (ptt1+putst1+puast1+ptp1+putsp1+puasp1==100){
                sa1=(ntt1*ptt1)/100+(nutst1*putst1)/100+(nuast1*puast1)/100+(ntp1*ptp1)/100+(nutsp1*putsp1)/100+(nuasp1*puasp1)/100;
            }
            else {
                cout << endl;
                cout << "   INPUTAN SALAH" << endl;
                cout << "   Jumlah persentase kurang dari atau lebih dari 100%" << endl;
                cout << "   Masukkan inputan ulang y/n : "; cin >> ulang;
                cout << endl;
            }
        }while (ulang=="y");
    }
    if (sa1>=85){prd1="A";}
    else if (sa1>=80||sa1<85){prd1="AB";}
    else if (sa1>=75||sa1<80){prd1="B";}
    else if (sa1>=70||sa1<75){prd1="BC";}
    else if (sa1>=65||sa1<70){prd1="C";}
    else if (sa1>=60||sa1<65){prd1="D";}
    else {prd1="E";}
    cout << endl;
    cout << "   SKOR AKHIR              : " << sa1 << endl;
    cout << "   PREDIKAT                : " << prd1 << endl;
    cout << "___________________________________________________________________" << endl << endl;
    if (jmk>=2){
        cout << "2. Mata Kuliah             : "; cin.ignore(); getline(cin, mk2);
        cout << "   Jumlah SKS              : "; cin >> sks2;
        cout << "   Teori/Praktikum (t/p/tp): "; cin >> tp2;
        cout << endl;
        if (tp2=="t"){
            do{
                cout << "   Input Nilai" << endl;
                cout << "   a. Nilai tugas teori    : "; cin >> ntt2;
                cout << "   b. Nilai UTS teori      : "; cin >> nutst2;
                cout << "   c. Nilai UAS teori      : "; cin >> nuast2;
                cout << endl;
                cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
                cout << "   a. Persen tugas teori   : "; cin >> ptt2;
                cout << "   b. Persen UTS teori     : "; cin >> putst2;
                cout << "   c. Persen UAS teori     : "; cin >> puast2;

                if (ptt2+putst2+puast2!=100){
                    cout << endl;
                    cout << "   INPUTAN SALAH" << endl;
                    cout << "   Jumlah persentase kurang dari atau lebih dari 100%" << endl;
                    cout << "   Masukkan inputan ulang" << endl;
                    cout << endl;
                }
            }while (ptt2+putst2+puast2!=100);

            sa2=(ntt2*ptt2)/100+(nutst2*putst2)/100+(nuast2*puast2)/100;
        }
        else if (tp2=="p"){
            do{
                cout << "   Input Nilai" << endl;
                cout << "   a. Nilai tugas praktikum: "; cin >> ntp2;
                cout << "   b. Nilai UTS praktikum  : "; cin >> nutsp2;
                cout << "   c. Nilai UAS praktikum  : "; cin >> nuasp2;
                cout << endl;
                cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
                cout << "   a. Persen tugas praktikum: "; cin >> ptp2;
                cout << "   b. Persen UTS praktikum  : "; cin >> putsp2;
                cout << "   c. Persen UAS praktikum  : "; cin >> puasp2;

                if (ptp2+putsp2+puasp2!=100){
                    cout << endl;
                    cout << "   INPUTAN SALAH" << endl;
                    cout << "   Jumlah persentase kurang dari atau lebih dari 100%" << endl;
                    cout << "   Masukkan inputan ulang" << endl;
                    cout << endl;
                }
            }while (ptp2+putsp2+puasp2!=100);

            sa2=(ntp2*ptp2)/100+(nutsp2*putsp2)/100+(nuasp2*puasp2)/100;
        }
        else{
            do{
                cout << "   Input Nilai (Teori)" << endl;
                cout << "   a. Nilai tugas teori    : "; cin >> ntt2;
                cout << "   b. Nilai UTS teori      : "; cin >> nutst2;
                cout << "   c. Nilai UAS teori      : "; cin >> nuast2;
                cout << endl;
                cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
                cout << "   a. Persen tugas teori   : "; cin >> ptt2;
                cout << "   b. Persen UTS teori     : "; cin >> putst2;
                cout << "   c. Persen UAS teori     : "; cin >> puast2;
                cout << endl;
                cout << "   Input Nilai (Ptaktikum)" << endl;
                cout << "   a. Nilai tugas praktikum: "; cin >> ntp2;
                cout << "   b. Nilai UTS praktikum  : "; cin >> nutsp2;
                cout << "   c. Nilai UAS praktikum  : "; cin >> nuasp2;
                cout << endl;
                cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
                cout << "   a. Persen tugas praktikum: "; cin >> ptp2;
                cout << "   b. Persen UTS praktikum  : "; cin >> putsp2;
                cout << "   c. Persen UAS praktikum  : "; cin >> puasp2;

                if (ptt2+putst2+puast2==100 && ptp2+putsp2+puasp2==100){
                    cout << "   Persentase nilai teori untuk menentukan skor akhir     : "; cin >> pt2;
                    cout << "   Persentase nilai praktikum untuk menentukan skor akhir : "; cin >> pp2;
                    sa2=pt2*((ntt2*ptt2)/100+(nutst2*putst2)/100+(nuast2*puast2)/100)/100+pp2*((ntp2*ptp2)/100+(nutsp2*putsp2)/100+(nuasp2*puasp2)/100)/100;
                }
                else if (ptt2+putst2+puast2+ptp2+putsp2+puasp2==100){
                    sa2=(ntt2*ptt2)/100+(nutst2*putst2)/100+(nuast2*puast2)/100+(ntp2*ptp2)/100+(nutsp2*putsp2)/100+(nuasp2*puasp2)/100;
                }
                else {
                    cout << endl;
                    cout << "   INPUTAN SALAH" << endl;
                    cout << "   Jumlah persentase kurang dari atau lebih dari 100%" << endl;
                    cout << "   Masukkan inputan ulang y/n : "; cin >> ulang;
                    cout << endl;
                }
            }while (ulang=="y");
        }
        if (sa2>=85){prd2="A";}
        else if (sa2>=80||sa2<85){prd2="AB";}
        else if (sa2>=75||sa2<80){prd2="B";}
        else if (sa2>=70||sa2<75){prd2="BC";}
        else if (sa2>=65||sa2<70){prd2="C";}
        else if (sa2>=60||sa2<65){prd2="D";}
        else {prd2="E";}
        cout << endl;
        cout << "   SKOR AKHIR              : " << sa2 << endl;
        cout << "   PREDIKAT                : " << prd2 << endl;
        cout << "___________________________________________________________________" << endl << endl;
    }
    if (jmk>=3){
        cout << "3. Mata Kuliah             : "; cin.ignore(); getline(cin, mk3);
        cout << "   Jumlah SKS              : "; cin >> sks3;
        cout << "   Teori/Praktikum (t/p/tp): "; cin >> tp3;
        cout << endl;
        if (tp3=="t"){
            do{
                cout << "   Input Nilai" << endl;
                cout << "   a. Nilai tugas teori    : "; cin >> ntt3;
                cout << "   b. Nilai UTS teori      : "; cin >> nutst3;
                cout << "   c. Nilai UAS teori      : "; cin >> nuast3;
                cout << endl;
                cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
                cout << "   a. Persen tugas teori   : "; cin >> ptt3;
                cout << "   b. Persen UTS teori     : "; cin >> putst3;
                cout << "   c. Persen UAS teori     : "; cin >> puast3;

                if (ptt3+putst3+puast3!=100){
                    cout << endl;
                    cout << "   INPUTAN SALAH" << endl;
                    cout << "   Jumlah persentase kurang dari atau lebih dari 100%" << endl;
                    cout << "   Masukkan inputan ulang" << endl;
                    cout << endl;
                }
            }while (ptt3+putst3+puast3!=100);

            sa3=(ntt3*ptt3)/100+(nutst3*putst3)/100+(nuast3*puast3)/100;
        }
        else if (tp3=="p"){
            do{
                cout << "   Input Nilai" << endl;
                cout << "   a. Nilai tugas praktikum: "; cin >> ntp3;
                cout << "   b. Nilai UTS praktikum  : "; cin >> nutsp3;
                cout << "   c. Nilai UAS praktikum  : "; cin >> nuasp3;
                cout << endl;
                cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
                cout << "   a. Persen tugas praktikum: "; cin >> ptp3;
                cout << "   b. Persen UTS praktikum  : "; cin >> putsp3;
                cout << "   c. Persen UAS praktikum  : "; cin >> puasp3;

                if (ptp3+putsp3+puasp3!=100){
                    cout << endl;
                    cout << "   INPUTAN SALAH" << endl;
                    cout << "   Jumlah persentase kurang dari atau lebih dari 100%" << endl;
                    cout << "   Masukkan inputan ulang" << endl;
                    cout << endl;
                }
            }while (ptp3+putsp3+puasp3!=100);

            sa3=(ntp3*ptp3)/100+(nutsp3*putsp3)/100+(nuasp3*puasp3)/100;
        }
        else{
            do{
                cout << "   Input Nilai (Teori)" << endl;
                cout << "   a. Nilai tugas teori    : "; cin >> ntt3;
                cout << "   b. Nilai UTS teori      : "; cin >> nutst3;
                cout << "   c. Nilai UAS teori      : "; cin >> nuast3;
                cout << endl;
                cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
                cout << "   a. Persen tugas teori   : "; cin >> ptt3;
                cout << "   b. Persen UTS teori     : "; cin >> putst3;
                cout << "   c. Persen UAS teori     : "; cin >> puast3;
                cout << endl;
                cout << "   Input Nilai (Ptaktikum)" << endl;
                cout << "   a. Nilai tugas praktikum: "; cin >> ntp3;
                cout << "   b. Nilai UTS praktikum  : "; cin >> nutsp3;
                cout << "   c. Nilai UAS praktikum  : "; cin >> nuasp3;
                cout << endl;
                cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
                cout << "   a. Persen tugas praktikum: "; cin >> ptp3;
                cout << "   b. Persen UTS praktikum  : "; cin >> putsp3;
                cout << "   c. Persen UAS praktikum  : "; cin >> puasp3;

                if (ptt3+putst3+puast3==100 && ptp3+putsp3+puasp3==100){
                    cout << "   Persentase nilai teori untuk menentukan skor akhir     : "; cin >> pt3;
                    cout << "   Persentase nilai praktikum untuk menentukan skor akhir : "; cin >> pp3;
                    sa3=pt3*((ntt3*ptt3)/100+(nutst3*putst3)/100+(nuast3*puast3)/100)/100+pp3*((ntp3*ptp3)/100+(nutsp3*putsp3)/100+(nuasp3*puasp3)/100)/100;
                }
                else if (ptt3+putst3+puast3+ptp3+putsp3+puasp3==100){
                    sa3=(ntt3*ptt3)/100+(nutst3*putst3)/100+(nuast3*puast3)/100+(ntp1*ptp3)/100+(nutsp3*putsp3)/100+(nuasp3*puasp3)/100;
                }
                else {
                    cout << endl;
                    cout << "   INPUTAN SALAH" << endl;
                    cout << "   Jumlah persentase kurang dari atau lebih dari 100%" << endl;
                    cout << "   Masukkan inputan ulang y/n : "; cin >> ulang;
                    cout << endl;
                }
            }while (ulang=="y");
        }
        if (sa3>=85){prd3="A";}
        else if (sa3>=80||sa3<85){prd3="AB";}
        else if (sa3>=75||sa3<80){prd3="B";}
        else if (sa3>=70||sa3<75){prd3="BC";}
        else if (sa3>=65||sa3<70){prd3="C";}
        else if (sa3>=60||sa3<60){prd3="D";}
        else {prd3="E";}
        cout << endl;
        cout << "   SKOR AKHIR              : " << sa3 << endl;
        cout << "   PREDIKAT                : " << prd3 << endl;
    }
    if (jmk>=4){
        cout << "___________________________________________________________________" << endl << endl;
        cout << "4. Mata Kuliah             : "; cin.ignore(); getline(cin, mk4);
        cout << "   Jumlah SKS              : "; cin >> sks4;
        cout << "   Teori/Praktikum (t/p/tp): "; cin >> tp4;
        cout << endl;
        if (tp4=="t"){
            do{
                cout << "   Input Nilai" << endl;
                cout << "   a. Nilai tugas teori    : "; cin >> ntt4;
                cout << "   b. Nilai UTS teori      : "; cin >> nutst4;
                cout << "   c. Nilai UAS teori      : "; cin >> nuast4;
                cout << endl;
                cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
                cout << "   a. Persen tugas teori   : "; cin >> ptt4;
                cout << "   b. Persen UTS teori     : "; cin >> putst4;
                cout << "   c. Persen UAS teori     : "; cin >> puast4;

                if (ptt4+putst4+puast4!=100){
                    cout << endl;
                    cout << "   INPUTAN SALAH" << endl;
                    cout << "   Jumlah persentase kurang dari atau lebih dari 100%" << endl;
                    cout << "   Masukkan inputan ulang" << endl;
                    cout << endl;
                }
            }while (ptt4+putst4+puast4!=100);

            sa4=(ntt4*ptt4)/100+(nutst4*putst4)/100+(nuast4*puast4)/100;
        }
        else if (tp4=="p"){
            do{
                cout << "   Input Nilai" << endl;
                cout << "   a. Nilai tugas praktikum: "; cin >> ntp4;
                cout << "   b. Nilai UTS praktikum  : "; cin >> nutsp4;
                cout << "   c. Nilai UAS praktikum  : "; cin >> nuasp4;
                cout << endl;
                cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
                cout << "   a. Persen tugas praktikum: "; cin >> ptp4;
                cout << "   b. Persen UTS praktikum  : "; cin >> putsp4;
                cout << "   c. Persen UAS praktikum  : "; cin >> puasp4;

                if (ptp4+putsp4+puasp4!=100){
                    cout << endl;
                    cout << "   INPUTAN SALAH" << endl;
                    cout << "   Jumlah persentase kurang dari atau lebih dari 100%" << endl;
                    cout << "   Masukkan inputan ulang" << endl;
                    cout << endl;
                }
            }while (ptp4+putsp4+puasp4!=100);

            sa4=(ntp4*ptp4)/100+(nutsp4*putsp4)/100+(nuasp4*puasp4)/100;
        }
        else{
            do{
                cout << "   Input Nilai (Teori)" << endl;
                cout << "   a. Nilai tugas teori    : "; cin >> ntt4;
                cout << "   b. Nilai UTS teori      : "; cin >> nutst4;
                cout << "   c. Nilai UAS teori      : "; cin >> nuast4;
                cout << endl;
                cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
                cout << "   a. Persen tugas teori   : "; cin >> ptt4;
                cout << "   b. Persen UTS teori     : "; cin >> putst4;
                cout << "   c. Persen UAS teori     : "; cin >> puast4;
                cout << endl;
                cout << "   Input Nilai (Ptaktikum)" << endl;
                cout << "   a. Nilai tugas praktikum: "; cin >> ntp4;
                cout << "   b. Nilai UTS praktikum  : "; cin >> nutsp4;
                cout << "   c. Nilai UAS praktikum  : "; cin >> nuasp4;
                cout << endl;
                cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
                cout << "   a. Persen tugas praktikum: "; cin >> ptp4;
                cout << "   b. Persen UTS praktikum  : "; cin >> putsp4;
                cout << "   c. Persen UAS praktikum  : "; cin >> puasp4;

                if (ptt4+putst4+puast4==100 && ptp4+putsp4+puasp4==100){
                    cout << "   Persentase nilai teori untuk menentukan skor akhir     : "; cin >> pt4;
                    cout << "   Persentase nilai praktikum untuk menentukan skor akhir : "; cin >> pp4;
                    sa4=pt4*((ntt4*ptt4)/100+(nutst4*putst4)/100+(nuast4*puast4)/100)/100+pp4*((ntp4*ptp4)/100+(nutsp4*putsp4)/100+(nuasp4*puasp4)/100)/100;
                }
                else if (ptt4+putst4+puast4+ptp4+putsp4+puasp4==100){
                    sa1=(ntt4*ptt4)/100+(nutst4*putst4)/100+(nuast4*puast4)/100+(ntp4*ptp4)/100+(nutsp4*putsp4)/100+(nuasp4*puasp4)/100;
                }
                else {
                    cout << endl;
                    cout << "   INPUTAN SALAH" << endl;
                    cout << "   Jumlah persentase kurang dari atau lebih dari 100%" << endl;
                    cout << "   Masukkan inputan ulang y/n : "; cin >> ulang;
                    cout << endl;
                }
            }while (ulang=="y");
        }
        if (sa4>=85){prd4="A";}
        else if (sa4>=80||sa4<85){prd4="AB";}
        else if (sa4>=75||sa4<80){prd4="B";}
        else if (sa4>=70||sa4<75){prd4="BC";}
        else if (sa4>=65||sa4<70){prd4="C";}
        else if (sa4>=60||sa4<65){prd4="D";}
        else {prd4="E";}
        cout << endl;
        cout << "   SKOR AKHIR              : " << sa4 << endl;
        cout << "   PREDIKAT                : " << prd4 << endl;
        cout << "___________________________________________________________________" << endl << endl;
    }
    if (jmk>=5){
        cout << "5. Mata Kuliah             : "; cin.ignore(); getline(cin, mk5);
        cout << "   Jumlah SKS              : "; cin >> sks5;
        cout << "   Teori/Praktikum (t/p/tp): "; cin >> tp5;
        cout << endl;
        if (tp5=="t"){
            do{
                cout << "   Input Nilai" << endl;
                cout << "   a. Nilai tugas teori    : "; cin >> ntt5;
                cout << "   b. Nilai UTS teori      : "; cin >> nutst5;
                cout << "   c. Nilai UAS teori      : "; cin >> nuast5;
                cout << endl;
                cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
                cout << "   a. Persen tugas teori   : "; cin >> ptt5;
                cout << "   b. Persen UTS teori     : "; cin >> putst5;
                cout << "   c. Persen UAS teori     : "; cin >> puast5;

                if (ptt5+putst5+puast5!=100){
                    cout << endl;
                    cout << "   INPUTAN SALAH" << endl;
                    cout << "   Jumlah persentase kurang dari atau lebih dari 100%" << endl;
                    cout << "   Masukkan inputan ulang" << endl;
                    cout << endl;
                }
            }while (ptt5+putst5+puast5!=100);

            sa5=(ntt5*ptt5)/100+(nutst5*putst5)/100+(nuast5*puast5)/100;
        }
        else if (tp5=="p"){
            do{
                cout << "   Input Nilai" << endl;
                cout << "   a. Nilai tugas praktikum: "; cin >> ntp5;
                cout << "   b. Nilai UTS praktikum  : "; cin >> nutsp5;
                cout << "   c. Nilai UAS praktikum  : "; cin >> nuasp5;
                cout << endl;
                cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
                cout << "   a. Persen tugas praktikum: "; cin >> ptp5;
                cout << "   b. Persen UTS praktikum  : "; cin >> putsp5;
                cout << "   c. Persen UAS praktikum  : "; cin >> puasp5;

                if (ptp5+putsp5+puasp5!=100){
                    cout << endl;
                    cout << "   INPUTAN SALAH" << endl;
                    cout << "   Jumlah persentase kurang dari atau lebih dari 100%" << endl;
                    cout << "   Masukkan inputan ulang" << endl;
                    cout << endl;
                }
            }while (ptp5+putsp5+puasp5!=100);

            sa5=(ntp5*ptp5)/100+(nutsp5*putsp5)/100+(nuasp5*puasp5)/100;
        }
        else{
            do{
                cout << "   Input Nilai (Teori)" << endl;
                cout << "   a. Nilai tugas teori    : "; cin >> ntt5;
                cout << "   b. Nilai UTS teori      : "; cin >> nutst5;
                cout << "   c. Nilai UAS teori      : "; cin >> nuast5;
                cout << endl;
                cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
                cout << "   a. Persen tugas teori   : "; cin >> ptt5;
                cout << "   b. Persen UTS teori     : "; cin >> putst5;
                cout << "   c. Persen UAS teori     : "; cin >> puast5;
                cout << endl;
                cout << "   Input Nilai (Ptaktikum)" << endl;
                cout << "   a. Nilai tugas praktikum: "; cin >> ntp5;
                cout << "   b. Nilai UTS praktikum  : "; cin >> nutsp5;
                cout << "   c. Nilai UAS praktikum  : "; cin >> nuasp5;
                cout << endl;
                cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
                cout << "   a. Persen tugas praktikum: "; cin >> ptp5;
                cout << "   b. Persen UTS praktikum  : "; cin >> putsp5;
                cout << "   c. Persen UAS praktikum  : "; cin >> puasp5;

                if (ptt5+putst5+puast5==100 && ptp5+putsp5+puasp5==100){
                    cout << "   Persentase nilai teori untuk menentukan skor akhir     : "; cin >> pt5;
                    cout << "   Persentase nilai praktikum untuk menentukan skor akhir : "; cin >> pp5;
                    sa5=pt5*((ntt5*ptt5)/100+(nutst5*putst5)/100+(nuast5*puast5)/100)/100+pp5*((ntp5*ptp5)/100+(nutsp5*putsp5)/100+(nuasp5*puasp5)/100)/100;
                }
                else if (ptt5+putst5+puast5+ptp5+putsp5+puasp5==100){
                    sa5=(ntt5*ptt5)/100+(nutst5*putst5)/100+(nuast5*puast5)/100+(ntp5*ptp5)/100+(nutsp5*putsp5)/100+(nuasp5*puasp5)/100;
                }
                else {
                    cout << endl;
                    cout << "   INPUTAN SALAH" << endl;
                    cout << "   Jumlah persentase kurang dari atau lebih dari 100%" << endl;
                    cout << "   Masukkan inputan ulang y/n : "; cin >> ulang;
                    cout << endl;
                }
            }while (ulang=="y");
        }
        if (sa5>=85){prd5="A";}
        else if (sa5>=80||sa5<85){prd5="AB";}
        else if (sa5>=75||sa5<80){prd5="B";}
        else if (sa5>=70||sa5<75){prd5="BC";}
        else if (sa5>=65||sa5<70){prd5="C";}
        else if (sa5>=60||sa5<65){prd5="D";}
        else {prd5="E";}
        cout << endl;
        cout << "   SKOR AKHIR              : " << sa5 << endl;
        cout << "   PREDIKAT                : " << prd5 << endl;
        cout << "___________________________________________________________________" << endl << endl;
    }
    if (jmk>=6){
        cout << "6. Mata Kuliah             : "; cin.ignore(); getline(cin, mk6);
        cout << "   Jumlah SKS              : "; cin >> sks6;
        cout << "   Teori/Praktikum (t/p/tp): "; cin >> tp6;
        cout << endl;
        if (tp6=="t"){
            do{
                cout << "   Input Nilai" << endl;
                cout << "   a. Nilai tugas teori    : "; cin >> ntt6;
                cout << "   b. Nilai UTS teori      : "; cin >> nutst6;
                cout << "   c. Nilai UAS teori      : "; cin >> nuast6;
                cout << endl;
                cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
                cout << "   a. Persen tugas teori   : "; cin >> ptt6;
                cout << "   b. Persen UTS teori     : "; cin >> putst6;
                cout << "   c. Persen UAS teori     : "; cin >> puast6;

                if (ptt6+putst6+puast6!=100){
                    cout << endl;
                    cout << "   INPUTAN SALAH" << endl;
                    cout << "   Jumlah persentase kurang dari atau lebih dari 100%" << endl;
                    cout << "   Masukkan inputan ulang" << endl;
                    cout << endl;
                }
            }while (ptt6+putst6+puast6!=100);

            sa6=(ntt6*ptt6)/100+(nutst6*putst6)/100+(nuast6*puast6)/100;
        }
        else if (tp6=="p"){
            do{
                cout << "   Input Nilai" << endl;
                cout << "   a. Nilai tugas praktikum: "; cin >> ntp6;
                cout << "   b. Nilai UTS praktikum  : "; cin >> nutsp6;
                cout << "   c. Nilai UAS praktikum  : "; cin >> nuasp6;
                cout << endl;
                cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
                cout << "   a. Persen tugas praktikum: "; cin >> ptp6;
                cout << "   b. Persen UTS praktikum  : "; cin >> putsp6;
                cout << "   c. Persen UAS praktikum  : "; cin >> puasp6;

                if (ptp6+putsp6+puasp6!=100){
                    cout << endl;
                    cout << "   INPUTAN SALAH" << endl;
                    cout << "   Jumlah persentase kurang dari atau lebih dari 100%" << endl;
                    cout << "   Masukkan inputan ulang" << endl;
                    cout << endl;
                }
            }while (ptp6+putsp6+puasp6!=100);

            sa6=(ntp6*ptp6)/100+(nutsp6*putsp6)/100+(nuasp6*puasp6)/100;
        }
        else{
            do{
                cout << "   Input Nilai (Teori)" << endl;
                cout << "   a. Nilai tugas teori    : "; cin >> ntt6;
                cout << "   b. Nilai UTS teori      : "; cin >> nutst6;
                cout << "   c. Nilai UAS teori      : "; cin >> nuast6;
                cout << endl;
                cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
                cout << "   a. Persen tugas teori   : "; cin >> ptt6;
                cout << "   b. Persen UTS teori     : "; cin >> putst6;
                cout << "   c. Persen UAS teori     : "; cin >> puast6;
                cout << endl;
                cout << "   Input Nilai (Ptaktikum)" << endl;
                cout << "   a. Nilai tugas praktikum: "; cin >> ntp6;
                cout << "   b. Nilai UTS praktikum  : "; cin >> nutsp6;
                cout << "   c. Nilai UAS praktikum  : "; cin >> nuasp6;
                cout << endl;
                cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
                cout << "   a. Persen tugas praktikum: "; cin >> ptp6;
                cout << "   b. Persen UTS praktikum  : "; cin >> putsp6;
                cout << "   c. Persen UAS praktikum  : "; cin >> puasp6;

                if (ptt6+putst6+puast6==100 && ptp6+putsp6+puasp6==100){
                    cout << "   Persentase nilai teori untuk menentukan skor akhir     : "; cin >> pt6;
                    cout << "   Persentase nilai praktikum untuk menentukan skor akhir : "; cin >> pp6;
                    sa6=pt6*((ntt6*ptt6)/100+(nutst6*putst6)/100+(nuast6*puast6)/100)/100+pp6*((ntp6*ptp6)/100+(nutsp6*putsp6)/100+(nuasp6*puasp6)/100)/100;
                }
                else if (ptt6+putst6+puast6+ptp6+putsp6+puasp6==100){
                sa6=(ntt6*ptt6)/100+(nutst6*putst6)/100+(nuast6*puast6)/100+(ntp6*ptp6)/100+(nutsp6*putsp6)/100+(nuasp6*puasp6)/100;
                }
                else {
                    cout << endl;
                    cout << "   INPUTAN SALAH" << endl;
                    cout << "   Jumlah persentase kurang dari atau lebih dari 100%" << endl;
                    cout << "   Masukkan inputan ulang y/n : "; cin >> ulang;
                    cout << endl;
                }
            }while (ulang=="y");
        }
        if (sa6>=85){prd6="A";}
        else if (sa6>=80||sa6<85){prd6="AB";}
        else if (sa6>=75||sa6<80){prd6="B";}
        else if (sa6>=70||sa6<75){prd6="BC";}
        else if (sa6>=65||sa6<70){prd6="C";}
        else if (sa6>=60||sa6<65){prd6="D";}
        else {prd6="E";}
        cout << endl;
        cout << "   SKOR AKHIR              : " << sa6 << endl;
        cout << "   PREDIKAT                : " << prd6 << endl;
        cout << "___________________________________________________________________" << endl << endl;
    }
    if (jmk>=7){
        cout << "7. Mata Kuliah             : "; cin.ignore(); getline(cin, mk7);
        cout << "   Jumlah SKS              : "; cin >> sks7;
        cout << "   Teori/Praktikum (t/p/tp): "; cin >> tp7;
        cout << endl;
        if (tp7=="t"){
            do{
                cout << "   Input Nilai" << endl;
                cout << "   a. Nilai tugas teori    : "; cin >> ntt7;
                cout << "   b. Nilai UTS teori      : "; cin >> nutst7;
                cout << "   c. Nilai UAS teori      : "; cin >> nuast7;
                cout << endl;
                cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
                cout << "   a. Persen tugas teori   : "; cin >> ptt7;
                cout << "   b. Persen UTS teori     : "; cin >> putst7;
                cout << "   c. Persen UAS teori     : "; cin >> puast7;

                if (ptt7+putst7+puast7!=100){
                    cout << endl;
                    cout << "   INPUTAN SALAH" << endl;
                    cout << "   Jumlah persentase kurang dari atau lebih dari 100%" << endl;
                    cout << "   Masukkan inputan ulang" << endl;
                    cout << endl;
                }
            }while (ptt7+putst7+puast7!=100);

            sa7=(ntt7*ptt7)/100+(nutst7*putst7)/100+(nuast7*puast7)/100;
        }
        else if (tp7=="p"){
            do{
                cout << "   Input Nilai" << endl;
                cout << "   a. Nilai tugas praktikum: "; cin >> ntp7;
                cout << "   b. Nilai UTS praktikum  : "; cin >> nutsp7;
                cout << "   c. Nilai UAS praktikum  : "; cin >> nuasp7;
                cout << endl;
                cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
                cout << "   a. Persen tugas praktikum: "; cin >> ptp7;
                cout << "   b. Persen UTS praktikum  : "; cin >> putsp7;
                cout << "   c. Persen UAS praktikum  : "; cin >> puasp7;
                if (ptp7+putsp7+puasp7!=100){
                    cout << endl;
                    cout << "   INPUTAN SALAH" << endl;
                    cout << "   Jumlah persentase kurang dari atau lebih dari 100%" << endl;
                    cout << "   Masukkan inputan ulang" << endl;
                    cout << endl;
                }
            }while (ptp7+putsp7+puasp7!=100);

            sa7=(ntp7*ptp7)/100+(nutsp7*putsp7)/100+(nuasp7*puasp7)/100;
        }
        else{
            do{
                cout << "   Input Nilai (Teori)" << endl;
                cout << "   a. Nilai tugas teori    : "; cin >> ntt7;
                cout << "   b. Nilai UTS teori      : "; cin >> nutst7;
                cout << "   c. Nilai UAS teori      : "; cin >> nuast7;
                cout << endl;
                cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
                cout << "   a. Persen tugas teori   : "; cin >> ptt7;
                cout << "   b. Persen UTS teori     : "; cin >> putst7;
                cout << "   c. Persen UAS teori     : "; cin >> puast7;
                cout << endl;
                cout << "   Input Nilai (Ptaktikum)" << endl;
                cout << "   a. Nilai tugas praktikum: "; cin >> ntp7;
                cout << "   b. Nilai UTS praktikum  : "; cin >> nutsp7;
                cout << "   c. Nilai UAS praktikum  : "; cin >> nuasp7;
                cout << endl;
                cout << "   Input Persentase (tidak perlu menambahkan '%' dalam inputan)" << endl;
                cout << "   a. Persen tugas praktikum: "; cin >> ptp7;
                cout << "   b. Persen UTS praktikum  : "; cin >> putsp7;
                cout << "   c. Persen UAS praktikum  : "; cin >> puasp7;

                if (ptt7+putst7+puast7==100 && ptp7+putsp7+puasp7==100){
                    cout << "   Persentase nilai teori untuk menentukan skor akhir     : "; cin >> pt7;
                    cout << "   Persentase nilai praktikum untuk menentukan skor akhir : "; cin >> pp7;
                    sa7=pt7*((ntt7*ptt7)/100+(nutst7*putst7)/100+(nuast7*puast7)/100)/100+pp7*((ntp7*ptp7)/100+(nutsp7*putsp7)/100+(nuasp7*puasp7)/100)/100;
                }
                else if (ptt7+putst7+puast7+ptp7+putsp7+puasp7==100){
                    sa7=(ntt7*ptt7)/100+(nutst7*putst7)/100+(nuast7*puast7)/100+(ntp7*ptp7)/100+(nutsp7*putsp7)/100+(nuasp7*puasp7)/100;
                }
                else {
                    cout << endl;
                    cout << "   INPUTAN SALAH" << endl;
                    cout << "   Jumlah persentase kurang dari atau lebih dari 100%" << endl;
                    cout << "   Masukkan inputan ulang y/n : "; cin >> ulang;
                    cout << endl;
                }
            }while (ulang=="y");
        }
        if (sa7>=85){prd7="A";}
        else if (sa7>=80||sa7<85){prd7="AB";}
        else if (sa7>=75||sa7<80){prd7="B";}
        else if (sa7>=70||sa7<75){prd7="BC";}
        else if (sa7>=65||sa7<70){prd7="C";}
        else if (sa7>=60||sa7<65){prd7="D";}
        else {prd7="E";}
        cout << endl;
        cout << "   SKOR AKHIR              : " << sa7 << endl;
        cout << "   PREDIKAT                : " << prd7 << endl;
        cout << "___________________________________________________________________" << endl << endl;
    }
    cout << "TOTAL SKOR     : " << sa1+sa2+sa3+sa4+sa5+sa6+sa7 << endl;
    cout << "IP SEMESTER    : " << (sa1+sa2+sa3+sa4+sa5+sa6+sa7)/jmk << endl;
    cout << "___________________________________________________________________" << endl << endl;
}
