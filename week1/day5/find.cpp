#include <bits/stdc++.h>
using namespace std;

template <typename Iterator,typename T>
Iterator myFind(Iterator first,Iterator last, const T &value){
    while(first!=last){
        if(*first==value){
            return first;
        }
        ++first;
    }
    return last;
}
int main() {

    vector<int> v = {10, 20, 30, 40};

    auto it = myFind(v.begin(), v.end(), 30);

    if (it != v.end())
        cout << "Found: " << *it;
    else
        cout << "Not Found";

    return 0;
}