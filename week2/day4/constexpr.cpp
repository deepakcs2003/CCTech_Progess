#include <bits/stdc++.h>
using namespace std;

constexpr int sqr(int a){
    return a*a;
}
enum Flags { GOOD = 1, BAD = 2, EOF_FLAG = 4 };

constexpr int operator|(Flags a, Flags b) {
    return int(a) | int(b);
}
int main() {
    constexpr int ans=sqr(5);
    cout<<ans<<endl;

    switch (BAD | EOF_FLAG) {
        case BAD | EOF_FLAG:
            cout << "Matched\n";
            break;
    }
    return 0;
}