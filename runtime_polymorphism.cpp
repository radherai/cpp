#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class function";
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived class function";
    }
};

int main() {
    Base* baseptr;
    Derived obj;

    baseptr = &obj;
    baseptr->display();

    return 0;
}
