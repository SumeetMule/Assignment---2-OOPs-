#include<iostream>
#include<vector>
using namespace std;
class list{
    vector<int> marks;
    public:
        void add_marks(int mr){
            marks.push_back(mr);
        }

        void remove(){
            if (!marks.empty())
            {
                int popped_entity = marks.back();
                marks.pop_back();
                cout<<"Popped entity : "<<popped_entity<<endl;
            }
            else{
                cout<<"List is empty."<<endl;
            }
        }

        void display(){
            for (int i = 0; i < marks.size(); i++)
            {
                cout<<"Marks : "<<marks[i]<<endl;
            }
        }

        int size(){
            return marks.size();
        }
};

int main(){
    list l1;
    l1.add_marks(20);
    l1.add_marks(30);
    l1.add_marks(40);
    l1.display();
    l1.remove();
    l1.remove();
    l1.add_marks(50);
    l1.display();
    cout<<"Size of list : "<<l1.size()<<endl;
    return 0;
}