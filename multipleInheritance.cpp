#include <iostream>
using namespace std;

class A{
    // creating a new class A 
    public:
    A() {
        // constructor of class A
        cout << "Constructor A" << "\n";
    }
    void a(){
        // method in class A
        cout << "Method a in A\n";
    }
};

class B{
    // creating a new class B
    public:
    B(){
        // Constructor for class B
        cout << "Constructor B\n";
    }
    void a(){
        // method in class B
        cout << "Method a in B\n";
    }
};

class C: public A, public B{
    // creating a new class C that inherits from class A and B
    public:
    C(){
        // Constructor for class C
        cout << "Constructor C\n";
    }
    void a(){
        // method in class C that is called when c.a() is called
        cout << "Method a in C\n";
    }
};

int main(){

    C c;
    c.a();  // calls method a in C

    return 0; // end main program
}