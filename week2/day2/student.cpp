#include"student.h"
#include<bits/stdc++.h>
 
int Student::student_cout=0;
Student:: Student(string name,int marks,int roll_no){
    this->name=name;
    this->marks=marks;
    this->roll_no=roll_no;
    student_cout++;
}
Student::~Student(){
    cout << "Destructor called for: " << name << endl;
    student_cout--;

}
int Student::getMarks() const{
    return marks;
}
string Student::getName() const{
    return name;
}
int Student::getRoll() const{
    return roll_no;
}

void Student::setMarks(int marks){
    this->marks=marks;
}
void Student::display() const{
    cout<<"name: "<<name<<endl;
    cout<<"roll_no: "<<roll_no<<endl;
    cout<<"marks: "<<marks<<endl;
}
int Student::getStundetCount(){
    return student_cout;
}
