#include<iostream>
#include<string>
using namespace std;
class Sports;
class student{
    private:
        string name;
        int marks;
    public:
        student(string name, int marks){
            this->name = name;
            this->marks = marks;
        }

        void get_details(){
            cout<<"Name: "<<name<<endl;
        }

        friend Sports marks(student *s1, Sports *p1);
};

class Sports{
    private:
        string spname;
        int score;
    public:
        Sports(string spname, int score){
            this->spname = spname;
            this->score = score;
        }

        void get_details2(){
            cout<<"Sports Person name: "<<spname<<endl;
        }

        friend Sports marks(student *s1, Sports *p1);
};

Sports marks(student *s1, Sports *p1){
    cout<<"Marks : "<<s1->marks<<" , Score : "<<p1->score<<endl;
}

int main(){
    student s1("Sumeet",25);
    s1.get_details();
    Sports p1("Rohit",35);
    p1.get_details2();
    marks(&s1,&p1);
    return 0;
}