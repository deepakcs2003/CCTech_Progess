#include <bits/stdc++.h>
using namespace std;


//concrete version work only on array
int sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
};

// this is work good for array but what about list,vector and stack
template <typename T>
T add(T arr,int n){
    T s=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    return s;
}

// by using this stl remove the 600 implementation because no need to write the code for each 
// 10 container * 60 algo=600;
template<typename Iterator,typename T>
T sumGen(Iterator first,Iterator last){
    T s=0;
    while (first!=last)
    {
        s+=*first;
        ++first;
    }
    return s;
    
}
int main() {

    int arr[]={1,2,3,4,5};
    cout<<sum(arr,5)<<endl;
    cout<<add(arr,5)<<endl;

    vector<int> v = {1,2,3,4,5};

    int result = sumGen<vector<int>::iterator, int>(v.begin(), v.end());

    cout << result;
    return 0;
}