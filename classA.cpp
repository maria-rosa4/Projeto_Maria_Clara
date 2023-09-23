#include <iostream>

using namespace std;

class A {
private:
    int A1;
    float A2;

public:
    // Construtor
    A(int a1, float a2) : A1(a1), A2(a2) {}

    // Getters e setters
    int getA1() const {
        return A1;
    }

    void setA1(int a1) {
        A1 = a1;
    }

    float getA2() const {
        return A2;
    }

    void setA2(float a2) {
        A2 = a2;
    }

    // Métodos da classe A
    void MA1() {
        cout << "Método MA1() da classe A" << endl;
    }

    void MA2() {
        cout << "Método MA2() da classe A" << endl;
    }
};



int main() {
    A objetoA(10, 3.14);

    objetoA.MA1();
    objetoA.MA2();

    return 0;
}
