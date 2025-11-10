#include <iostream>
using namespace std;
class A {
public:
    class B {
    private: int b;
    public: B(int val=10): b(val) {}
            int getB() { return b; }
    };
    class C {
    public: int c;
        C(int val=20): c(val) {}
        void printBFromC() {
            B objB(30);
            cout << "B from C = " << objB.getB() << endl;
        }
    };
    void printBFromA() {
        B objB(40);
        cout << "B from A = " << objB.getB() << endl;
    }
    void accessBVariable() {
        B objB(50);
        cout << "Accessing B in A = " << objB.getB() << endl;
    }
};
int main() {
    A outer;
    A::B objB(60);   
    cout << "B from main = " << objB.getB() << endl;
    outer.printBFromA();  
    A::C objC(70); objC.printBFromC(); 
    outer.accessBVariable();
}
