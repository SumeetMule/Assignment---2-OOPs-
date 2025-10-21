#include<iostream>
#include<vector>
#include<string>

using namespace std;
class dictionary{
    vector<string> keys;
    vector<string> values;
    public:
        void add(string key, string value){
            for (int i = 0; i < keys.size(); i++)
            {
                if (keys[i] == key)
                {
                    values[i] = value; 
                    return;
                }
            }
           keys.push_back(key);
           values.push_back(value); 
        }

        string search_key(string key){
            for (int i = 0; i < keys.size(); i++)
            {
                if (keys[i] == key)
                {
                    return values[i];
                }
            }
            return "Key not found";
        }

        void display(){
            if (keys.empty())
            {
                cout<<"Dictionary is empty."<<endl;
                return;
            }
            
            for (int i = 0; i < keys.size(); i++)
            {
                cout<<keys[i]<<" -> "<<values[i]<<endl;
            }
        }
};

int main(){
    dictionary d1;
    d1.add("Subject-1","OOPs");
    d1.add("Subject-2","LA");
    d1.add("Subject-3","DAA");
    d1.display();
    string search_key = d1.search_key("Subject-2");
    cout<<"Searched Key : "<<search_key<<endl;
    return 0;
}