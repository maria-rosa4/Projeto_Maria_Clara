#include <iostream>


using namespace std;


class C {
private:
    int C1;
    float C2;


public:
    // Construtor
    C(int c1, float c2) : C1(c1), C2(c2) {}


    // Getters e setters
    int getC1() const {
        return C1;
    }


    void setC1(int c1) {
        C1 = c1;
    }


    float getC2() const {
        return C2;
    }


    void setC2(float c2) {
        C2 = c2;
    }


    // Métodos da classe C
    void MC1() {
        cout << "Método MC1() da classe C" << endl;
    }

    void MC2() {
        cout << "Método MC2() da classe C" << endl;
    }

    void MC3() {
        cout << "Método MC3() da classe C" << endl;
    }

};


int main() {
    C objetoC(30, 2.500);


    objetoC.MC1();
    objetoC.MC2();
    objetoC.MC3();

    return 0;
}


