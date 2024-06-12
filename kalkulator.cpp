#include <iostream>
#include <math.h>
#include <string>

using namespace std;

void Jumlah();
void Kurang();
void Kali();
void Bagi();
void Mod();

void Jumlah() {
  float a, b;
  float hasil;
  cout << " Penjumlahan\n\n";
  cout << " Masukkan Bilangan Pertama : ";
  cin >> a;
  cout << " Masukkan Bilangan Kedua : ";
  cin >> b;
  hasil = a + b;
  cout << " Hasil Penghitungan : " << hasil;
}

void Kurang() {
  float a, b;
  float hasil;
  cout << " Pengurangan\n\n";
  cout << " Masukkan Bilangan Pertama : ";
  cin >> a;
  cout << " Masukkan Bilangan Kedua : ";
  cin >> b;
  hasil = a - b;
  cout << " Hasil Penghitungan : " << hasil;
}

void Kali() {
  float a, b;
  float hasil;
  cout << " Perkalian\n\n";
  cout << " Masukkan Bilangan Pertama : ";
  cin >> a;
  cout << " Masukkan Bilangan Kedua : ";
  cin >> b;
  hasil = a * b;
  cout << " Hasil Penghitungan : " << hasil;
}

void Bagi() {
  float a, b;
  float hasil;
  cout << " Pembagian\n\n";
  cout << " Masukkan Bilangan Pertama : ";
  cin >> a;
  cout << " Masukkan Bilangan Kedua : ";
  cin >> b;
  hasil = a / b;
  cout << " Hasil Penghitungan : " << hasil;
}

void Mod() {
  int a, b;
  float hasil = 0;
  cout << " Modulus\n\n";
  cout << " Masukkan Bilangan : ";
  cin >> a;
  cout << " Masukkan Bilangan Pembagi : ";
  cin >> b;
  hasil = a % b;
  cout << " Hasil Penghitungan : " << hasil;
}

int main() {

  int pil;
  float hasil;
  string operasi;
  char u;

q:
  cout << "PILIH OPERATOR ARITMATIKA" << endl;
  cout << "1. Penjumlahan" << endl;
  cout << "2. Pengurangan" << endl;
  cout << "3. Perkalian" << endl;
  cout << "4. Pembagian" << endl;
  cout << "5. Modulus" << endl;
  cout << endl;

  cout << "Masukan Pilihan : ";
  cin >> pil;
  
  switch (pil) {
  case 1:
    Jumlah();
    break;
  case 2:
    Kurang();
    break;
  case 3:
    Kali();
    break;
  case 4:
    Bagi();
    break;
  case 5:
    Mod();
    break;
  default:
    cout << "Salah Masukan Operator" << endl;
  }

  cout << endl;
  cout << " ==================================================" << endl;
  cout << " Apakah Anda Ingin Menginput Ulang ? [Y/T] ? ";
  cin >> u;

  if (u == 'Y' || u == 'y') {
    system("cls");
    goto q;
  } else {
    exit(0);
  }

  return 0;
}