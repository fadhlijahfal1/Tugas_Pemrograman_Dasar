#include <iostream>
#include <string>

using namespace std;

class nomor1 {

private :
    int y;

public :
    void sety(int a) {
    y = a;
    }

    int gety() {
        return y;
    }
};

class nomor2 {
public :
    int x;

};

int main () {
    nomor1 satu;
    nomor2 dua;

    satu.sety(25);
    dua.x = 30;

    cout << "y :\t" << satu.gety() << endl;
    cout << "x :\t" << dua.x << endl;

    return 0;
}