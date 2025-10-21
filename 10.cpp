#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0; //This is pure virtual function.
};

class Circle : public Shape {
    int rad;
public:
    Circle(int rad){ 
        this->rad = rad; 
    }
    
    void area(){ 
        cout<<"Circle Area: "<<3.14*rad*rad<<endl; 
    }
};

class Square : public Shape {
    int side;
public:
    Square(int side){
        this->side = side; 
    }
    
    void area(){ 
        cout<<"Square Area: "<<side*side<<endl; 
    }
};

int main() {
    Circle c(3);
    Square s(4);
    c.area();
    s.area();
    return 0;
}
