#ifndef CAD_H
#define CAD_H
#include <iostream>
#include <vector>
using namespace std;

class Cad {
private:
    int id;

public:
    Cad(int id);
    int getId() const;
    virtual Cad* clone() const = 0;
    virtual void display() = 0;
};

class CadArea : public Cad {
public:
    CadArea(int id);
    virtual double area() = 0;
};

class Circle : public CadArea {
private:
    static float pi;
    double radius;
    double x, y;

public:
    Circle(int id, double r, double x, double y);

    double area() override;
    void display() override;
    Cad* clone() const override;
};

class Line : public Cad {
private:
    double x1, y1, x2, y2;

public:
    Line(int id, double x1, double y1, double x2, double y2);

    void display() override;
    Cad* clone() const override;
};

// class Rectangle : public CadArea {
// private:
//     double x, y;

// public:
//     Rectangle(int id, double x, double y);

//     double area() override;
//     void display() override;
//     Rectangle clone(const Rectangle &r);
// };

class Text : public Cad {
private:
    string text;

public:
    Text(int id, string text);

    void display() override;
    Cad* clone() const override;
};

class Document {
private:
    vector<Cad*> shapes;
    int id = 1;

public:
    void addLine(double x1, double y1, double x2, double y2);
    void addCircle(double radius, double x, double y);
    void addText(string text);
    void cloneShape(int id);
    void deleteObject(int id);
    void listObject();
};

#endif
