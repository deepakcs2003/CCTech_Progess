#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v={1,2,3,4};
    v.push_back(5);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    stack<int> s;
    s.push(10);
    s.push(30);
    s.pop();
    cout<<s.top()<<endl;

    return 0;
}
