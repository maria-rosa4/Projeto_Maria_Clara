#include <iostream>


using namespace std;


class D {
private:
    int D1;
    int D2;


public:
    // Construtor
    D(int d1, int d2) : D1(d1), D2(d2) {}


    // Getters e setters
    int getD1() const {
        return D1;
    }


    void setD1(int d1) {
        D1 = D1;
    }


    int getD2() const {
        return D2;
    }


    void setD2(int d2) {
        D2 = d2;
    }


    // Métodos da classe D
    void MD1() {
        cout << "Método MD1() da classe D" << endl;
    }

    void MD2() {
        cout << "Método MD2() da classe D" << endl;
    }

<<<<<<< HEAD
    void MD3() {
        cout << "Método MD3() da classe D" << endl;
    }
=======
       void MD4() {
        cout << "Método MD4() da classe D" << endl;
    }
  
>>>>>>> a007ae5ba8111af9d6199f4151c7263a4b856c59

};


int main() {
    D objetoD(28, 6);


    objetoD.MD1();
    objetoD.MD2();
<<<<<<< HEAD
    objetoD.MD3();

=======
    objetoD.MD4();
>>>>>>> a007ae5ba8111af9d6199f4151c7263a4b856c59
    return 0;
}


