#include <bits/stdc++.h>
using namespace std;

struct  IsOdd
{
    bool operator()(int x){
        return x%2!=0;
    }
};

int main() {
    vector<int> v={2,4,5,6,7};
    auto it=find_if(v.begin(),v.end(),IsOdd());
    if(it!=v.end()){
        cout << "First odd: " << *it;
    }
    

    return 0;
}