#include <iostream>
using namespace std;

struct Turunan_Fungsi {
    int a, b, c;
};

struct Fungsi {
    int a, b, c;
};

Turunan_Fungsi Menghitung_turunan(Fungsi fungsi) {
    Turunan_Fungsi turunan_fungsi;
    turunan_fungsi.a = fungsi.a * 2;
    turunan_fungsi.b = fungsi.b + 5;
    turunan_fungsi.c = 0;
    return turunan_fungsi;
}

int main() {
    Fungsi fungsi;
    Turunan_Fungsi turunan_fungsi;

    cout << "Masukkan koefisien a, b, dan c: ";
    cin >> fungsi.a >> fungsi.b >> fungsi.c;

    turunan_fungsi = Menghitung_turunan(fungsi);

    cout << "Turunan fungsi adalah: " << turunan_fungsi.a << "x^2 + " << turunan_fungsi.b << "x + " << turunan_fungsi.c << endl;
    return 0;
}