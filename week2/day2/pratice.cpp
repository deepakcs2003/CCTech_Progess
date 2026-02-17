#include <bits/stdc++.h>
using namespace std;

int main() {

    int x=10;
    int *ptr=&x;
    cout<<x<<endl;
    *ptr=20;
    cout<<x<<endl;

    return 0;
}