#include <iostream>
using namespace std;

int main() {
    int kelipatan_uang, uang_1000, uang_500, uang_100, uang_50, uang_25, sisa_uang;

    cout << "Masukan Nilai Uang: ";
    cin >> kelipatan_uang;

    uang_1000 = kelipatan_uang / 1000;
    sisa_uang = kelipatan_uang % 1000;

    uang_500 = sisa_uang / 500;
    sisa_uang = sisa_uang % 500;

    uang_100 = sisa_uang / 100;
    sisa_uang = sisa_uang % 100;

    uang_50 = sisa_uang / 50;
    sisa_uang = sisa_uang % 50;

    uang_25 = sisa_uang / 25;
    sisa_uang = sisa_uang % 25;

    cout << uang_1000 << " Pecahan Rp.1000" << endl;
    cout << uang_500 << " Pecahan Rp.500" << endl;
    cout << uang_100 << " Pecahan Rp.100" << endl;
    cout << uang_50 << " Pecahan Rp.50" << endl;
    cout << uang_25 << " Pecahan Rp.25" << endl;

    return 0;
}