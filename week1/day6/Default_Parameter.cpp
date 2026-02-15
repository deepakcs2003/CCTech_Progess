#include <bits/stdc++.h>
using namespace std;

void show(int a=10){
    cout<<"value of a:"<<a<<endl;
}
void display(int a = 10, int b=10) {
    cout << "a: " << a << " b: " << b << endl;
}
int sqr(int a=3*4){
    return a*a;
}
int main() {

    show(5);
    show();
    display(10,20);
    display(5);
    display();
    cout<<" "<<sqr()<<endl;
    return 0;
}