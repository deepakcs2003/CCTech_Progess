#include <bits/stdc++.h>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base\n";
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived\n";
    }
};

int main() {

     Base* ptr = new Derived();
    ptr->show();
    return 0;
}