#include <iostream>
using namespace std;
class A {
public:
    class B {
    private: int b;
    public: B(int val=10): b(val) {}
            int getB() { return b; }
    };
};
int main() {
    A::B objB(60);
    cout << "B from main = " 
         << objB.getB() << endl; 
}
