#include <iostream>
#include <string>

class pesawat {

private :
    std::string namapesawat;
    std::string nomortipe;
    std::string tujuan;

public :
    pesawat (std::string b, std::string c, std::string d) {
        namapesawat = b;
        nomortipe = c;
        tujuan = d;
    }
    
    void setnamapesawat(std::string b) {
        namapesawat = b;
    }

    std::string getnamapesawat() {
        return namapesawat;
    }

    void setnomortipe(std::string c) {
        nomortipe = c;
    }

    std::string getnomortipe() {
        return nomortipe;
    }

    void settujuan(std::string d) {
        tujuan = d;
    }

    std::string gettujuan () {
        return tujuan;
    }

    void tampilkandata () {
        std::cout << "Nama Pesawat :\t" << namapesawat << ", Tipe Pesawat :\t" << nomortipe << ", Tujuan :\t" << tujuan << std::endl;
    }
};

int main () {
    pesawat pesawat1 ("Garuda Indonesia", "BOEING-4477", "SURABAYA");

    std::cout << "INFORMASI KEBERANGKATAN :\t" << std::endl;
    pesawat1.tampilkandata();

    pesawat1.setnamapesawat("Garuda Indonesia");
    pesawat1.setnomortipe("BOEING-4477");
    pesawat1.settujuan("MEDAN");

    std::cout << "INFORMASI TUJUAN :\t" << std::endl;
    pesawat1.tampilkandata();

    std::cout << "" << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << "" << std::endl;


    pesawat pesawat2 ("Lion Air", "BOEING-3266", "JAKARTA");

    std::cout << "INFORMASI KEBERANGKATAN :\t" << std::endl;
    pesawat2.tampilkandata();

    pesawat2.setnamapesawat("Lion Air");
    pesawat2.setnomortipe("BOEING-3266");
    pesawat2.settujuan("BALI");

    std::cout << "INFORMASI TUJUAN :\t" << std::endl;
    pesawat2.tampilkandata();

    return 0;
}