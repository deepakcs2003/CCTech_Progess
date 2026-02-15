#include <bits/stdc++.h>
using namespace std;

int add(int a,int b){
    return a+b;
}
int add(double a,double b){
    return a+b;
}

// Overload Resolution
void f(int x){
        cout << "Int version\n";
}

void f(double x) {
    cout << "Double version\n";
}

void test(int a=10){
    cout<<a<<endl;
}
void test(double a=20.0){
    cout<<a<<endl;
}
int main() {

    cout << add(5, 6) << endl;      
    cout << add(5.5, 6.5) << endl;  

    f(5); 
    f(5.6);
    char ch='A';
    f(ch);
    return 0;
}