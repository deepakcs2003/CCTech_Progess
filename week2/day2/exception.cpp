#include <bits/stdc++.h>
using namespace std;

int divide(int a,int b){
    if(b==0){
        throw runtime_error("divide by zero");
    }else{
        return a/b;
    }
}
class Test {
public:
    Test() { cout << "Constructor\n"; }
    ~Test() { cout << "Destructor\n"; }
};
void func(){
    Test t;
    throw runtime_error("error is occure");
}
class MyException:public exception{
    public:
    const char* what() const noexcept override{
        return "custom exception";
    }
};
void fun(int x){
    if(x==1){
        throw(1);
    }else if(x==2){
        throw(2.3);
    }else if(x==3){
        throw runtime_error("error");
    }
}
int main() {

    // try{
    //     int* ptr = new int[1000000000000];
    // }catch(bad_alloc& e){
    //     cout<<"memory allocation failed"<<endl;
    // }
    // try{
    //     cout << divide(10, 0);

    // }catch(exception& e){
    //     cout<<e.what()<<endl;
    // }

    stack<int> s;
    try{
        if(s.empty()){
            throw runtime_error("stack is empty");
        }else{
            s.pop();
        }
    }catch(exception& e){
        cout<<"this is exceptio: "<<e.what()<<endl;
    }

    try{
        ifstream file("abc.txt");
        if(!file){
            throw runtime_error("fole not found!");
        }
    }catch(exception& e){
        cout<<e.what()<<endl;
    }

     try {
        vector<int> v = {1,2,3};
        cout << v.at(10); // Throws out_of_range
    }
    catch (exception& e) {
        cout << e.what();
    }

     try {
        Test t;
        throw runtime_error("Error!");
    }
    catch (...) {
        cout << "Caught exception\n";
    }

    try{
        func();
    }catch(exception& e){
        cout<<"exception caught: "<<e.what()<<endl;
    }

    try {
        throw MyException();
    }
    catch (exception& e) {
        cout << e.what();
    }

     try {
        fun(2);
    }
    catch (int i) {
        cout << "Integer caught\n";
    }
    catch (double d) {
        cout << "Double caught\n";
    }
    catch (...) {
        cout << "Unknown exception\n";
    }
    return 0;
}