//judul
//SIMULASI DETEKTOR PENYAKIT
//Author    : Amalia Putri Dwi Mareta
//Modify    : 03 Okt 2022

#include <iostream>
using namespace std;

//kamus
char gaa, gba;
string ulang, gbb, gca, gcb, gcc, gcd;
//ketiga susunan huruf pada kamus tersebut merupakan inisial
//misal gaa= gejala pertama a; gcb= gejala ketiga b; dst

//deskripsi
main ()
{
    do //digunakan untuk melakukan perulangan apabila inputan salah
    {
        system("cls"); //sistem cls ini digunakan untuk merapikan tampilan dengan cara hanya menampilkan perintah yang dituju
        cout << "SIMULASI DETEKTOR PENYAKIT" << endl << endl;
        cout << "Masukkan gejala pertama :" << endl;
        cout << "a. Demam" << endl;
        cout << "b. Pegal-pegal" << endl;
        cout << "Masukkan (a-b) : "; cin >> gaa;

        switch (gaa)
        {
            case 'a':
                {
                    do
                    {
                        system ("cls");
                        cout << "Masukkan gejala kedua :" << endl;
                        cout << "a. Mual / muntah" << endl;
                        cout << "b. Kelelahan / lemas" << endl;
                        cout << "c. Sakit kepala" << endl;
                        cout << "d. Sakit tenggorokan" << endl;
                        cout << "Masukkan (a-d) : "; cin >> gba;

                        switch (gba)
                        {
                            case 'a':
                            {
                                do
                                {
                                    system ("cls");
                                    cout << "Masukkan gejala ketiga :" << endl;
                                    cout << "a. Diare" << endl;
                                    cout << "b. Ada ruam kemerah-merahan" << endl;
                                    cout << "Masukkan (a-b) : "; cin >> gca;

                                    if (gca=="a")
                                        {
                                            system ("cls");
                                            cout << "Berdasarkan jawaban anda, anda diduga menderita penyakit tifus." << endl;
                                            cout << "Berikut hal-hal yang dapat anda lakukan :" << endl;
                                            cout << "1. Konsultasi ke dokter" << endl;
                                            cout << "2. Kompres air hangat" << endl;
                                            cout << "3. Hindari makanan pedas" << endl;
                                            cout << "4. Istirahat yang cukup" << endl;
                                            cout << endl;
                                            cout << "                        -- Get Well Soon --" << endl;
                                            exit(0); //digunakan untuk menghentikan perulangan (mengakhiri sistem)
                                        }
                                    else if (gca=="b")
                                        {
                                            system ("cls");
                                            cout << "Berdasarkan jawaban anda, anda diduga menderita penyakit DBD." << endl;
                                            cout << "Berikut hal-hal yang dapat anda lakukan :" << endl;
                                            cout << "1. Pergi ke rumah sakit" << endl;
                                            cout << "2. Cukupi cairan tubuh" << endl;
                                            cout << "3. Istirahat yang cukup" << endl;
                                            cout << "4. Berdoa" << endl;
                                            cout << endl;
                                            cout << "                        -- Get Well Soon --" << endl;
                                            exit(0);
                                        }
                                    else
                                        {
                                            system ("cls");
                                            cout << "Input salah. Ingin memasukkan inputan ulang? (y/n) : ";
                                            cin >> ulang;
                                            if (ulang=="y")
                                            {continue;}//melanjutkan ke menu sebelumnya (mengulang perintah)
                                            else
                                            {exit(0);}
                                        }
                                }while (true); //sama halnya dengan menganggap pernyataan if adalah benar
                                break;
                            }
                            case 'b':
                            {
                                do
                                {
                                    system ("cls");
                                    cout << "Masukkan gejala ketiga :" << endl;
                                    cout << "a. Tidak bisa merasa maupun membau" << endl;
                                    cout << "b. Ada benjolan gatal di seluruh tubuh" << endl;
                                    cout << "Masukkan (a-b) : "; cin >> gcb;

                                    if (gcb=="a")
                                        {
                                            system ("cls");
                                            cout << "Berdasarkan jawaban anda, anda diduga menderita penyakit Covid-19." << endl;
                                            cout << "Berikut hal-hal yang dapat anda lakukan :" << endl;
                                            cout << "1. Isolasi mandiri" << endl;
                                            cout << "2. Konsultasi ke dokter" << endl;
                                            cout << "3. Istirahat yang cukup" << endl;
                                            cout << "4. Makan-makanan bergizi" << endl;
                                            cout << endl;
                                            cout << "                        -- Get Well Soon --" << endl;
                                            exit(0);
                                        }
                                    else if (gcb=="b")
                                        {
                                            system ("cls");
                                            cout << "Berdasarkan jawaban anda, anda diduga menderita penyakit cacar air." << endl;
                                            cout << "Berikut hal-hal yang dapat anda lakukan :" << endl;
                                            cout << "1. Jangan menggaruk cacar" << endl;
                                            cout << "2. Konsultasi ke dokter" << endl;
                                            cout << "3. Istirahat yang cukup" << endl;
                                            cout << "4. Makan-makanan bergizi" << endl;
                                            cout << endl;
                                            cout << "                        -- Get Well Soon --" << endl;
                                            exit(0);
                                        }
                                    else
                                        {
                                            system ("cls");
                                            cout << "Input salah. Ingin memasukkan inputan ulang? (y/n) : ";
                                            cin >> ulang;
                                            if (ulang=="y")
                                            {continue;}
                                            else
                                            {exit(0);}
                                        }
                                }while (true);
                                break;
                            }
                            case 'c':
                            {
                                do
                                {
                                    system ("cls");
                                    cout << "Masukkan gejala ketiga :" << endl;
                                    cout << "a. Ada ruam kemerah-merahan" << endl;
                                    cout << "b. Ada benjolan gatal di seluruh tubuh" << endl;
                                    cout << "Masukkan (a-b) : "; cin >> gcc;

                                    if (gcc=="a")
                                        {
                                            system ("cls");
                                            cout << "Berdasarkan jawaban anda, anda diduga menderita penyakit DBD." << endl;
                                            cout << "Berikut hal-hal yang dapat anda lakukan :" << endl;
                                            cout << "1. Pergi ke rumah sakit" << endl;
                                            cout << "2. Cukupi cairan tubuh" << endl;
                                            cout << "3. Istirahat yang cukup" << endl;
                                            cout << "4. Berdoa" << endl;
                                            cout << endl;
                                            cout << "                        -- Get Well Soon --" << endl;
                                            exit(0);
                                        }
                                    else if (gcc=="b")
                                        {
                                            system ("cls");
                                            cout << "Berdasarkan jawaban anda, anda diduga menderita penyakit cacar air." << endl;
                                            cout << "Berikut hal-hal yang dapat anda lakukan :" << endl;
                                            cout << "1. Jangan menggaruk cacar" << endl;
                                            cout << "2. Konsultasi ke dokter" << endl;
                                            cout << "3. Istirahat yang cukup" << endl;
                                            cout << "4. Makan-makanan bergizi" << endl;
                                            cout << endl;
                                            cout << "                        -- Get Well Soon --" << endl;
                                            exit(0);
                                        }
                                    else
                                        {
                                            system ("cls");
                                            cout << "Input salah. Ingin memasukkan inputan ulang? (y/n) : ";
                                            cin >> ulang;
                                            if (ulang=="y")
                                            {continue;}
                                            else
                                            {exit(0);}
                                            break;
                                        }
                                }while (true);
                                break;
                            }
                            case 'd':
                            {
                                do
                                {
                                    system ("cls");
                                    cout << "Masukkan gejala ketiga :" << endl;
                                    cout << "a. Pilek" << endl;
                                    cout << "b. Tidak bisa merasa maupun membau" << endl;
                                    cout << "Masukkan (a-b) : "; cin >> gcd;

                                    if (gcd=="a")
                                        {
                                            system ("cls");
                                            cout << "Berdasarkan jawaban anda, anda diduga menderita penyakit flu." << endl;
                                            cout << "Berikut hal-hal yang dapat anda lakukan :" << endl;
                                            cout << "1. Mengkonsumsi obat penurun panas" << endl;
                                            cout << "2. Cukupi kebutuhan cairan tubuh" << endl;
                                            cout << "3. Istirahat yang cukup" << endl;
                                            cout << "4. Menjaga tubuh agar tetap hangat" << endl;
                                            cout << endl;
                                            cout << "                        -- Get Well Soon --" << endl;
                                            exit(0);
                                        }
                                    else if (gcd=="b")
                                        {
                                            system ("cls");
                                            cout << "Berdasarkan jawaban anda, anda diduga menderita penyakit Covid-19." << endl;
                                            cout << "Berikut hal-hal yang dapat anda lakukan :" << endl;
                                            cout << "1. Isolasi mandiri" << endl;
                                            cout << "2. Konsultasi ke dokter" << endl;
                                            cout << "3. Istirahat yang cukup" << endl;
                                            cout << "4. Makan-makanan bergizi" << endl;
                                            cout << endl;
                                            cout << "                        -- Get Well Soon --" << endl;
                                            exit(0);
                                        }
                                    else
                                        {
                                            system ("cls");
                                            cout << "Input salah. Ingin memasukkan inputan ulang? (y/n) : ";
                                            cin >> ulang;
                                            if (ulang=="y")
                                            {continue;}
                                            else
                                            {exit(0);}
                                        }
                                }while (true);
                                break;
                            }
                            default:
                            {
                                system ("cls");
                                cout << "Input salah. Ingin memasukkan inputan ulang? (y/n) : ";
                                cin >> ulang;
                                if (ulang=="y")
                                {continue;}
                                else
                                {exit(0);}
                                break;
                            }
                        }
                    }while (true);
                    break;
                }
            case 'b':
                {
                    do
                    {
                        system ("cls");
                        cout << "Masukkan gejala kedua :" << endl;
                        cout << "a. Kembung" << endl;
                        cout << "b. Sulit berkonsentrasi" << endl;
                        cout << "Masukkan (a-b) : "; cin >> gbb;

                        if (gbb=="a")
                            {
                                system ("cls");
                                cout << "Berdasarkan jawaban anda, anda hanya masuk angin." << endl;
                                cout << "Berikut hal-hal yang dapat anda lakukan :" << endl;
                                cout << "1. Kerokan" << endl;
                                cout << "2. Minum-minuman hangat" << endl;
                                cout << "3. Minum tolak angin" << endl;
                                cout << endl;
                                cout << "             -- Get Well Soon --" << endl;
                                exit(0);
                            }
                        else if (gbb=="b")
                            {
                                system ("cls");
                                cout << "Berdasarkan jawaban anda, anda hanya kurang healing." << endl;
                                cout << "Berikut hal-hal yang dapat anda lakukan :" << endl;
                                cout << "1. Jalan-jalan" << endl;
                                cout << "2. Makan-makan" << endl;
                                cout << "3. Jika tidak punya uang, cukup mendekatkan diri ke pada Tuhan" << endl;
                                cout << endl;
                                cout << "                    -- Get Well Soon --" << endl;
                                exit(0);
                            }
                        else
                            {
                                system ("cls");
                                cout << "Input salah. Ingin memasukkan inputan ulang? (y/n) : ";
                                cin >> ulang;
                                if (ulang=="y")
                                {continue;}
                                else
                                {exit(0);}
                            }
                    }while (true);
                    break;
                }
            default:
                {
                    system ("cls");
                    cout << "Input salah. Ingin memasukkan inputan ulang? (y/n) : ";
                    cin >> ulang;
                    if (ulang=="y")
                    {continue;}
                    else
                    {exit(0);}
                    break;
                }
         }
    }while (true);
}
