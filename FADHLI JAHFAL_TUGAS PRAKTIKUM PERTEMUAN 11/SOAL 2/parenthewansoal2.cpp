#include <iostream>
#include <string>

using namespace std;

class hewan {
    public:
    void predator () {
        cout << "Hewan ini Predator" << endl;
    }
    
    void taring () {
        cout << "Hewan ini Bertaring" << endl;
    }

    void cakar () {
        cout << "Hewan ini Memiliki Cakar" << endl;
    }
};

class harimau:public hewan {
    public :
    void predator () {
        cout << "Ini adalah Harimau" << endl;
    }
};

class singa:public hewan {
    public :
    void predator () {
        cout << "Ini adalah Singa" << endl;
    }
};

class macan:public hewan {
    public :
    void predator () {
        cout << "Ini adalah Macan" << endl;
    }
};

int main () {
    harimau predator1;
    // predator1.getharimau ();
    predator1.predator ();
    predator1.taring ();
    predator1.cakar ();

    cout << "" << endl;

    singa predator2;
    // predator2.getsinga ();
    predator2.predator ();
    predator2.taring ();
    predator2.cakar ();

    cout << "" << endl;

    macan predator3;
    // predator3.getmacan ();
    predator3.predator ();
    predator3.taring ();
    predator3.cakar ();

    return 0;
}