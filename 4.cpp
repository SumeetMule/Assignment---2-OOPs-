#include<iostream>
#include<string>
using namespace std;

class person{
    private:
        string name;
        int exp;
    public:
        person(string name, int exp){
            this->name = name;
            this->exp = exp;
        }

        void get_details(){
            cout<<"Name : "<<name<<" Exp : "<<exp<<endl;
        }
};

class Employee : public person{
    private:
        int level;
        int salary;
    public:
        Employee(int level, int salary, string name, int exp) : person(name,exp){
            this->level = level;
            this->salary = salary;
        }

        void get_details2(){
            cout<<"Level : "<<level<<" Salary : "<<salary<<endl;
        }
};

class Manager : public Employee{
    private:
        string Company;
        int Msalary;
    public:
        Manager(string Company, int Msalary, int level, int salary, string name, int exp) : Employee(level,salary,name,exp){
            this->Company = Company;
            this->Msalary = Msalary;
        }

        void get_details3(){
            cout<<"Company : "<<Company<<" Manager Salary : "<<Msalary<<endl;
        }
};

int main(){
    Manager m1("Nasscom",50000,2,40000, "Sumeet",5);
    m1.get_details();
    m1.get_details2();
    m1.get_details3();
    return 0;
}