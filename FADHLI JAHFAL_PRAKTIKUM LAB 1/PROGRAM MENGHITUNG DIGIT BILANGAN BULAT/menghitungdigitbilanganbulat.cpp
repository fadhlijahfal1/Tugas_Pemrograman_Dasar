#include <iostream>
using namespace std;

int main() {
  int jumlah_angka, jumlah_digit = 0;

  cout << "Masukkan angka: ";
  cin >> jumlah_angka;

  while (jumlah_angka != 0) {
    jumlah_angka /= 10;
    jumlah_digit++;
  }

  cout << "Jumlah digit: " << jumlah_digit << endl;

  return 0;
}