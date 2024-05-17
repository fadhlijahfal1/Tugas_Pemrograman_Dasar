#include <iostream>
#include <string>

class robot {

private :
    std::string nama;
    int umur;
    std::string mbti;

public :
    robot (std::string b, int c, std::string d) {
        nama = b;
        umur = c;
        mbti = d;
    }
    
    void setnama(std::string b) {
        nama = b;
    }

    std::string getnama() {
        return nama;
    }

    void setumur(int c) {
        umur = c;
    }

    int getumur () {
        return umur;
    }

    void setmbti(std::string d) {
        mbti = d;
    }

    std::string getmbti () {
        return mbti;
    }

    void tampilkandata () {
        std::cout << "Nama :\t" << nama << ", Umur :\t" << umur << ", MBTI :\t" << mbti << std::endl;
    }
};

int main () {
    robot rbt1 ("IJUL", 20, "FJKL");

    std::cout << "Informasi Awal Robot 1 :\t" << std::endl;
    rbt1.tampilkandata();

    std::cout << "Nama :\t" << rbt1.getnama();

    std::cout << "" << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << "" << std::endl;


    robot rbt2 ("TOYIB", 400, "LNKD");

    std::cout << "Informasi Awal Robot 2 :\t" << std::endl;
    rbt2.tampilkandata();

    std::cout << "Nama :\t" << rbt2.getnama();

    return 0;
}