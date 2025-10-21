#include<iostream>
using namespace std;
class shape{
    protected:
    float length;
    float breadth;
    public:
        shape(float ln, float bd){
            this->length = ln;
            this->breadth = bd;
        }

        float getlength(){ 
            return length;
        }

        float getbreadth(){
            return breadth;
        }
};

class rectangle : public shape{
    float perimeter;
    float area;
    public:
        rectangle(float ln, float bd) : shape(ln,bd){
            this->perimeter = 0;
            this->area = 0;
        }

        void perimeter_of_rect(){
            perimeter = 2*(length + breadth);
            cout<<"Preimeter of Rectangle : "<<perimeter<<endl;
        }

        void area_of_rectangle(){
            area = length * breadth;
            cout<<"Area of Rectangle : "<<area<<endl;
        }
};

int main(){
    rectangle r1(6,3);
    r1.area_of_rectangle();
    r1.perimeter_of_rect();
    return 0;
}