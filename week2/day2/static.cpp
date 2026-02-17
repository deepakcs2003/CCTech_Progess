#include <iostream>
using namespace std;

class Math {
public:
int x;
static int y;
public:
    static int add(int a, int b) {  
        return a + b;
    }
};

int main() {
    cout << "Sum: " << Math::add(5, 7) << endl;  
    
    return 0;
}