#include <iostream>
#include <string>

using namespace std;

class pesawat {
public:
    string namapesawat;
    string nomortipe;
    string tujuan;

    void info_pesawat() {
        cout << "Nama Pesawat\t\t: \t" << namapesawat << endl;
        cout << "Tipe Pesawat\t\t: \t" << nomortipe << endl;
        cout << "Tujuan Keberangkatan\t: \t" << tujuan << endl;
    }
};

int main() {

    cout << "===== INFORMASI PESAWAT =====" << endl;
    cout << "" << endl;

    pesawat pesawatt;

    pesawatt.namapesawat = "Batik Air";
    pesawatt.nomortipe = "BOEING-2194";
    pesawatt.tujuan = "PALEMBANG";

    pesawatt.info_pesawat();

    return 0;
}