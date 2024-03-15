#include <iostream>
using namespace std;

int main() {
  int tahun_jumlah;

  cout << "Hitung Tahun: ";
  cin >> tahun_jumlah;

  if (tahun_jumlah % 4 == 0) {
    if (tahun_jumlah % 100 == 0) {
      if (tahun_jumlah % 400 == 0) {
        cout << tahun_jumlah << " adalah tahun kabisat." << endl;
      } else {
        cout << tahun_jumlah << " bukan tahun kabisat." << endl;
      }
    } else {
      cout << tahun_jumlah << " adalah tahun kabisat." << endl;
    }
  } else {
    cout << tahun_jumlah << " bukan tahun kabisat." << endl;
  }

  return 0;
}