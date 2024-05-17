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

    rbt1.setnama("DIKDIK");
    rbt1.setumur(100);
    rbt1.setmbti("SLEBEW");

    std::cout << "Informasi Setelah diubah :\t" << std::endl;
    rbt1.tampilkandata();

    std::cout << "" << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << "" << std::endl;


    robot rbt2 ("TOYIB", 400, "LNKD");

    std::cout << "Informasi Awal Robot 2 :\t" << std::endl;
    rbt2.tampilkandata();

    rbt2.setnama("MURAD");
    rbt2.setumur(10);
    rbt2.setmbti("AWWW");

    std::cout << "Informasi Setelah diubah :\t" << std::endl;
    rbt2.tampilkandata();

    return 0;
}