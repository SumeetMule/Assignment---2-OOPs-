#include<iostream>
#include<string>
using namespace std;

class Person{
    private:
        string pname;
    public:
        Person(string pname){
            this->pname = pname;
        }

        void get_details(){
            cout<<"Persons Name: "<<pname<<endl;
        }
};

class Athlete{
    private:
        string state;
    public:
        Athlete(string state){
            this->state = state;
        }

        void get_details2(){
            cout<<"State of Athlete: "<<state<<endl;
        }
};

class SportsPerson : public Person, public Athlete{
    private:
        int rank;
        int id;
    public:
        SportsPerson(int id, int rank, string pname, string state) : Person(pname),Athlete(state){
            this->id = id;
            this->rank = rank;
        }

        void get_details3(){
            cout<<"Id : "<<id<<" , Rank : "<<rank<<endl;
        }
};

int main(){
    SportsPerson p1(100,1,"Sumeet","Maharashtra");
    p1.get_details();
    p1.get_details2();
    p1.get_details3();
    return 0;
}