#include<iostream>
using namespace std;

class  Sort{
    private:
        int arr[100];
        int size;

    public:
        void input(){
            cout<<"Enter number of elements: ";
            cin>>size;
            cout<<"Enter " <<size<<" elements: ";
            for(int i = 0; i < size; i++){
                cin>>arr[i];
            }
        }

        void display(){
            for(int i = 0; i < size; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

        void bubbleSort(){
            for(int i = 0; i < size - 1; i++){
                for(int j = 0; j < size - i - 1; j++){
                    if(arr[j] > arr[j + 1]) {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            cout<<"Bubble Sort Done!"<<endl;
        }

        void insertionSort(){
            for(int i = 1; i < size; i++){
                int key = arr[i];
                int j = i - 1;
                
                while(j >= 0 && arr[j] > key){
                    arr[j + 1] = arr[j];
                    j--;
                }
                arr[j + 1] = key;
            }
            cout<<"Insertion Sort Done!"<<endl;
        }

        void selectionSort(){
            for(int i = 0; i < size - 1; i++){
                int minIndex = i;
                
                for(int j = i + 1; j < size; j++){
                    if(arr[j] < arr[minIndex]){
                        minIndex = j;
                    }
                }
                
                int temp = arr[i];
                arr[i] = arr[minIndex];
                arr[minIndex] = temp;
            }
            cout << "Selection Sort Done!" << endl;
        }
};

int main(){
    Sort s1;
    int choice;
    
    s1.input();
    
    do{
        cout<<"\n1. Bubble Sort\n2. Insertion Sort\n3. Selection Sort\n4. Display\n5. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;
        
        switch(choice) {
            case 1:
                s1.bubbleSort();
                break;
            case 2:
                s1.insertionSort();
                break;
            case 3:
                s1.selectionSort();
                break;
            case 4:
                s1.display();
                break;
            case 5:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    }while(choice != 5);
    
    return 0;
}