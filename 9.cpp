#include<iostream>
#include<string>
using namespace std;
class bank_account{
    private:
        string name;
        float bal;
    public:
        bank_account(string nm, float bl){
            this->name = nm;
            this->bal = bl;
        }
        void get_value(void){
            cout<<"Name: "<<name<<" Balance: "<<this->bal<<endl;
        }

        void deposit(float n1){
            this->bal = this->bal + n1;
        }

        void withdraw(float n1){
            float temp = this->bal - n1;
            if (temp <= 0)
            {
                cout<<"Balance is low - "<<temp<<endl;
            }
            else{
                this->bal = temp;
                cout<<"Balance is - "<<this->bal<<endl;
            }
        }
};

int main(){
    bank_account a1("Sumeet",10000.50),a2("Rohit",200.60);
    a1.get_value();
    a2.get_value();
    a1.deposit(5000.5);
    a2.deposit(6000.98);
    a1.get_value();
    a2.get_value();
    a1.withdraw(2000);
    a2.withdraw(2000);
    a1.get_value();
    a2.get_value();
    return 0;
}