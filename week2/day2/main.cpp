#include <bits/stdc++.h>
using namespace std;
#include"student.h"
int main() {
    Student s1("deepak",90,22550097);
    Student s2("ashish",100,2251010);
     cout << "\nStudent 1 Details:\n";
    s1.display();

    cout << "\nStudent 2 Details:\n";
    s2.display();

    cout << "\nTotal Students: "
         << Student::getStundetCount() << endl;

    s1.setMarks(95.0);

    cout << "\nAfter Updating Marks:\n";
    s1.display();
    

    return 0;
}