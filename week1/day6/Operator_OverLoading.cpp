#include <bits/stdc++.h>
using namespace std;

class MyString{
    string str;
    public:
    MyString(string str=""){
        this->str=str;
    }
    MyString operator+(const MyString& other) {
        return MyString(str+other.str);
    }
    void display(){
        cout<<str<<endl;
    }

};
enum E {c0,c1,c2};
E operator+(const E& a,const E& b){
    int result=(a+b);
    return static_cast<E>(result);
}
int main() {

    MyString first("deepak ");
    MyString last("Vishwakarma");
    MyString full=first+last;
    full.display();
    E a=c0;
    E b=c1;
    // cout<<a<<endl;
    // cout<<b<<endl;
    E x=a+b;
    cout<<x<<endl;
    return 0;
}