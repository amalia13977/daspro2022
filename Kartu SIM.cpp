//judul
//author    : Amalia Putri Dwi Mareta
//modify    : 21 Sept 2022

//kamus
#include <iostream>
#include <string>
using namespace std;

string ts, no, nm, ttl, gd, jk, alt, kec, kab, sp, prov, blk;
//ts    : type SIM
//no    : nomer SIM
//nm    : nama
//ttl   : tempat, tanggal, lahir
//gd    : golongan darah
//jk    : jenis kelamin
//alm   : alamat
//sp    : status pekerjaan
//prov  : provinsi
//blk   : berlaku hingga

//deskripsi
main ()
{
    cout << "PENDATAAN SIM" << endl << endl;
    cout << "Type SIM                       : "; getline(cin, ts);
    cout << "Nomor SIM                      : "; getline(cin, no);
    cout << "Nama Lengkap                   : "; getline(cin, nm);
    cout << "Tempat, Tanggal Lahir          : "; getline(cin, ttl);
    cout << "Golongan darah                 : "; getline(cin, gd);
    cout << "Jenis Kelamin                  : "; getline(cin, jk);
    cout << "Alamat (Jalan, Desa, rt/rw)    : "; getline(cin, alt);
    cout << "Kecamatan                      : "; getline(cin, kec);
    cout << "Kabupaten                      : "; getline(cin, kab);
    cout << "Status Pekerjaan               : "; getline(cin, sp);
    cout << "Provinsi                       : "; getline(cin, prov);
    cout << "Berlaku Hingga                 : "; getline(cin, blk);

    cout << "OUTPUT" << endl << endl;
    cout << "_______________________________________________________" << endl;
    cout << "           INDONESIA                                   " << endl;
    cout << "      SURAT IZIN MENGEMUDI         DRIVING LICENSE     " << endl;
    cout << "                                       " << ts << endl;
    cout << "                               " << no << endl;
    cout << "       1. " << nm << endl;
    cout << "       2. " << ttl << endl;
    cout << "       3. " << gd << " - " << jk << endl;
    cout << "       4. " << alt << endl;
    cout << "          Kec. " << kec << endl;
    cout << "          " << kab << endl;
    cout << "       5. " << sp << endl;
    cout << "       6. " << prov << endl;
    cout << "                                       " << blk << endl;
    cout << "_______________________________________________________" << endl;
}
