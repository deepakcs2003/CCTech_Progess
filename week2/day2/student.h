#ifndef STUDENT_H
#define STUDENT_H
#include <string>

using namespace std;
class Student{
    private:
    string name;
    int marks;
    int roll_no;
    static int student_cout;
    public:
    Student(string name,int marks,int roll_no);
    ~Student();

    
    void setMarks(int marks) ;
   
    string getName() const;
    int getMarks() const;
    int getRoll() const;
    void display() const;
    static int getStundetCount();
};

#endif