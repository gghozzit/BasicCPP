#include <iostream>

using namespace std;

void TampilData(int data[50], int n) {
  for (int i = 0; i < n; i++) {
    cout << data[i] << " ";
  }
  cout << endl;
}

void Search(int data[50], int n) {
  int key, ada;
  cout << "\n Masukkan Angka yang Dicari : ";
  cin >> key;
  ada = 0;
  for (int i = 0; i < n; i++) {
    if (data[i] == key) {
      ada++;
    }
  }
  cout << endl;
  cout << " ==========================================================\n";
  if (ada == 0) {
    cout << " Hasil Searching : Data Angka Tidak Berhasil Ditemukan" << endl;
  } else {
    cout << " Hasil Searching : Ada " << ada
         << " Data Angka yang Berhasil Ditemukan" << endl;
  }
}

int main() {
  int data[20];
  int i, n, j, tmp, c, d, asc;
  char u;

  cout << " \n ========= Ahmad Ghozali [Searching and Sorting] ========= "
       << endl;
q:
  cout << " \n Masukkan Jumlah Data Angka : ";
  cin >> n;
  cout << endl;
  for (int i = 0; i < n; i++) {
    cout << " Data Angka Ke " << i + 1 << " : ";
    cin >> data[i];
  }
  cout << "\n Data Angka Sebelum Diurutkan : ";
  TampilData(data, n);
  Search(data, n);
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      if (data[j] > data[j + 1]) {
        tmp = data[j];
        data[j] = data[j + 1];
        data[j + 1] = tmp;
      }
    }
  }
  cout << " \n Data Angka Setelah Diurutkan Dari Yang Terkecil : ";
  TampilData(data, n);
  for (int c = 1; c < n; c++) {
    for (int d = 0; d < n - c; d++) {
      if (data[d] < data[d + 1]) {
        asc = data[d];
        data[d] = data[d + 1];
        data[d + 1] = asc;
      }
    }
  }
  cout << " \n Data Angka Setelah Diurutkan Dari Yang Terbesar :";
  for (int i = 0; i < n; i++) {
    cout << " " << data[i];
  }
  cout << endl;
  cout << " ==========================================================\n";
  cout << " \n Apakah Anda Ingin Menginput Ulang [Y/T]?";
  cin >> u;

  if (u == 'Y' || u == 'y') {
    system("cls");
    goto q;
  } else {
    exit(0);
  }

  return 0;
}