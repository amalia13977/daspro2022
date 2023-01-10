#include <iostream>

using namespace std;

int main() {
    int matriks1[10][10], matriks2[10][10], hasil[10][10];
    int i, j, k, m, n, q, jumlah = 0;
    cout << "Masukkan jumlah baris kedua matriks: ";
    cin >> m;
    cout << "Masukkan jumlah kolom matriks pertama: ";
    cin >> n;
    cout << "Masukkan jumlah kolom matriks kedua: ";
    cin >> q;

    cout << endl;
    cout << "Masukkan elemen matriks pertama: \n";
    for(i = 0; i < m; i++){
      for(j = 0; j < n; j++){
        cin >> matriks1[i][j];
      }
    }

    cout << endl;
    cout << "Masukkan elemen matriks kedua: \n";
    for(i = 0; i < m; i++){
      for(j = 0; j < q; j++){
        cin >> matriks2[i][j];
      }
    }

    for(i = 0; i < m; i++){
      for(j = 0; j < q; j++){
        for(k = 0; k < m; k++){
          jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }

    cout << endl;
    cout << "Hasil perkalian matriks: \n";
    for(i = 0; i < m; i++){
      for(j = 0; j < q; j++){
        cout << hasil[i][j] << "\t";
      }
      cout << endl;
    }


  return 0;
}
