#include <iostream>
#include <string>

using namespace std;

struct Pegawai {
    string nama;
    string departemen;
    int gaji;
};

void naikGaji(Pegawai& pegawai, float incrementPercentage) {
    pegawai.gaji += pegawai.gaji * (incrementPercentage / 100);
}

int main() {
    Pegawai pegawai_toko;

    int s;

    cout << "[1]. Masukan Kode Pegawai \t:" << endl;
    cin >> s;

    if (s == 1) {
        pegawai_toko.nama = "Budi";
        pegawai_toko.departemen = "IT";
        pegawai_toko.gaji = 5000000;

        cout << "Nama Pegawai \t: " << pegawai_toko.nama << endl;
        cout << "Departemen \t: " << pegawai_toko.departemen << endl;
        cout << "Gaji \t\t: " << pegawai_toko.gaji << endl;

        cout << "==============================" << endl;

        naikGaji(pegawai_toko, 10); // Increase the salary by 10%

        cout << "===KENAIKAN GAJI===" << endl;

        cout << "Nama Pegawai \t: " << pegawai_toko.nama << endl;
        cout << "Departemen \t: " << pegawai_toko.departemen << endl;
        cout << "Gaji \t\t: " << pegawai_toko.gaji << endl;
    }

    return 0;
}