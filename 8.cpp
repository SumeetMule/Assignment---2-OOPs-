#include <iostream>
using namespace std;

class Calculator{
public:
    int sum(int a, int b){ 
        return a + b; 
    }
    int sum(int a, int b, int c){ 
        return a + b + c; 
    }
};

class Shape{
public:
    virtual void draw(){
        cout<<"Drawing shape"<<endl;
    }
};

class Circle : public Shape{
public:
    void draw() override{
        cout<<"Drawing circle"<<endl;
    }
};

class Square : public Shape{
public:
    void draw() override{
        cout<<"Drawing square"<<endl;
    }
};

int main(){
    //Here Function Overloading is done.
    Calculator c1;
    cout<<"Sum of 2 numbers: "<<c1.sum(5, 3)<<endl;
    cout<<"Sum of 3 numbers: "<<c1.sum(1, 2, 3)<<endl;
    
    //Here Fuction Overriding is done.
    Shape* s1;
    Circle ci1;
    Square sq1;
    
    s1 = &ci1;
    s1->draw();
    
    s1 = &sq1;
    s1->draw();
    
    return 0;
}