#include <iostream>

using namespace std;

int main() {

  int angka, jumlah, max, min;
  char u;

q:
  cout << "masukkan jumlah angka: ";
  cin >> jumlah;
  cout << endl;

  for (int i = 1; i <= jumlah; i++) {

    cout << "Masukkan Angka       : ";
    cin >> angka;

    if (i == 1) {
      min = angka;
      max = angka;
    } else if (min > angka) {
      min = angka;
    } else if (max < angka) {
      max = angka;
    } else {
    }
  }

  cout << endl;
  cout << "Nilai minimum           : " << min << endl;
  cout << "Nilai maksimum          : " << max << endl;
  cout << "===========================================" << endl;
  cout << "Apakah Anda Ingin Menginput Ulang ? [Y/T] ?";
  cin >> u;

  if (u == 'Y' || u == 'y') {
    system("cls");
    goto q;
  } else {
    exit(0);
  }

  return 0;
}