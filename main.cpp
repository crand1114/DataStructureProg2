/*
		*	Author:	Charles
		*	Date:	02/09/18
		*	Assignment:		Program	#2	- linked list array
		*	File:	Main.cpp
		*	Description: This file implements the methods from the List.cpp file and is for user input
		*/

#include <iostream>
#include "List.h"
using namespace std;
int main(){
    List list;
    int option=0;
    string input;
    int index;

    do{
        cout<<"List Array Menu"<<endl;                        // the command prompt to inform user on what each number does and menu continues to run until user inputs 9
        cout<<"1. Insert value into Array"<<endl;
        cout<<"2. Reverse Display"<<endl;
        cout<<"3. Select index or location in array"<<endl;
        cout<<"4. Delete value from array"<<endl;
        cout<<"5. Display odd, even, or all stings in array"<<endl;
        cout<<"9. Exit Program"<<endl;
        cout<<"Enter option number:";
        cin>>option;
        switch (option){
            case 1:                                                                     //user input string and calls the InsertAtEnd method from List.cpp
                cout<<"Enter word, letter, symbol, or number to add to array"<<endl;
                cin>>input;
                list.InsertAtEnd(input);
                break;
            case 2:                                                                  //calls the ReverseDisplay method from List.cpp
                list.ReverseDisplay();
                break;
            case 3:                                                           // user input index and calls the GetValueAt method from List.cpp
                cout<<"Enter index of array"<<endl;
                cin>>index;
                list.GetValueAt(index);
                break;
            case 4:                                                         //user input string to delete and calls the DeleteAll method from List.cpp
                cout<<"Enter value for deletion"<<endl;
                cin>>input;
                list.DeleteAll(input);
                break;
            case 5:                                                      //user input to show all, even, or odd strings and calls Display method from List.cpp
                cout<<"Enter even, odd,or all"<<endl;
                cin>>input;
                list.Display(input);
                break;


        }
    }while (option!=9);                                          //menu continues to run until user inputs 9 to exit the program
        return 0 ;


}
