
#include <iostream>

using namespace std;

class B {
private:
    int B1;
    float B2;

public:
    // Construtor
    B(int b1, float b2) : B1(b1), B2(b2) {}

    // Getters e setters
    int getB1() const {
        return B1;
    }

    void setB1(int b1) {
        B1 = b1;
    }

    float getB2() const {
        return B2;
    }

    void setB2(float b2) {
        B2 = b2;
    }

    // Métodos da classe B
    void MB1() {
        cout << "Método MB1() da classe B" << endl;
    }

    void MB2() {
        cout << "Método MB2() da classe B" << endl;
    }
};

int main() {
    B objetoB(20, 2.718);

    objetoB.MB1();
    objetoB.MB2();

    return 0;
}