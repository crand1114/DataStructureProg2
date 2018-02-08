#include <iostream>
#include "List.h"
using namespace std;
int main(){
    List list;
    int option=0;
    string input;
    int index;

    do{
        cout<<"List Array Menu"<<endl;
        cout<<"1. Insert value into Array"<<endl;
        cout<<"2. Reverse Display"<<endl;
        cout<<"3. Select index or location in array"<<endl;
        cout<<"4. Delete value from array"<<endl;
        cout<<"9. Exit Program"<<endl;
        cout<<"Enter option:";
        cin>>option;
        switch (option){
            case 1:
                cout<<"Enter word, letter, symbol, or number to add to array"<<endl;
                cin>>input;
                list.InsertAtEnd(input);
                break;
            case 2:
                list.ReverseDisplay();
                break;
            case 3:
                cout<<"Enter index of array"<<endl;
                cin>>index;
                list.GetValueAt(index);
                break;
            case 4:
                cout<<"Enter value for deletion"<<endl;
                cin>>input;
                list.DeleteAll(input);
                break;


        }
    }while (option!=9);
        return 0 ;


}
