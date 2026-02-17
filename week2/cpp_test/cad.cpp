#include "cad.h"
#include <bits/stdc++.h>
using namespace std;

float Circle::pi = 3.14f;

Cad::Cad(int id) : id(id) {}

int Cad::getId() const {
    return id;
}
CadArea::CadArea(int id):Cad(id){};

//circle
Circle::Circle(int id,double r,double x,double y)
:CadArea(id),radius(r),x(x),y(y){};

double Circle::area(){
    return pi * radius * radius;
}

void Circle::display(){
    cout<<"circle: \n  id: "<<getId()
    <<" radius : "<<radius
    <<" x : "<<x
    <<" y : "<<y<<endl;
}
Cad* Circle::clone() const {
    return new Circle(*this);
}

// for line

Line::Line(int id,double x1,double y1,double x2,double y2)
:Cad(id),x1(x1),y1(y1),x2(x2),y2(y2){};

void Line::display(){
    cout<<"line: \n id : "<<getId()<<": "
    <<" p1: "<<"("<<x1<<","<<y1<<")"
    <<" p2: ("<<x2<<" , "<<y2<<")"<<endl;
}
Cad* Line::clone() const {
    return new Line(*this);
}

// for text

Text::Text(int id,string text):Cad(id),text(text){};

void Text::display(){
    cout<<"text: \n id: "<<getId()
    <<" text: "<<text<<endl;
}
Cad* Text::clone() const {
    return new Text(*this);
}

// Document
void Document::addLine(double x1, double y1, double x2, double y2) {
    shapes.push_back(new Line(id++, x1, y1, x2, y2));
    cout<<"line is added successfully: "<<endl;
}
void Document::addCircle(double radius, double x, double y) {
    shapes.push_back(new Circle(id++, radius, x, y));
    cout<<"circle is added successfully: "<<endl;
}
void Document::addText(string text) {
    shapes.push_back(new Text(id++, text));
    cout<<"text is added successfully: "<<endl;
}

void Document::deleteObject(int id){
    for(auto it=shapes.begin();it!=shapes.end();it++){
        if((*it)->getId()==id){
            delete *it;
            shapes.erase(it);
            cout<<"shape is delete successfully: "<<endl;
            return;
        }
    }
    cout<<"error happend id is not found: "<<endl;
}
void Document::listObject(){
    for(auto shape:shapes){
        shape->display();
    }
}

void Document::cloneShape(int id){
    for(auto shape : shapes){
        if(shape->getId() == id){
            Cad* cloned = shape->clone();
            shapes.push_back(cloned);
            cout<<"shape cloned successfully\n";
            return;
        }
    }
    cout<<"error happened id not found\n";
}

