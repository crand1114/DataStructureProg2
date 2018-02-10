/*
		*	Author:	Charles
		*	Date:	02/09/18
		*	Assignment:		Program	#2	- linked list array
		*	File:	List.cpp
		*	Description: This file implements the methods from the List.h file
		*/

#include "List.h"
#include <iostream>
using namespace std;

List::List(){                     //creation of empty list
    ElementType listArray[MAX];
}
bool List::isEmpty() {         // method goes through the array and checks for an empty index
    for(int i=0; i<MAX; i++){
        if(listArray[i].empty())
            return true;
        cout<<"index "<<i<<" is empty"<<endl;
    }

}
void List::InsertAtEnd(ElementType x) {     //inserts string into the array after the last filled index
    for(int i=0; i<MAX; i++){
        if(listArray[i].empty()){
            listArray[i]=x;
            break;
        }
    }
}
void List::DeleteAll(ElementType x) {     //deletes all strings in array that equals the input from user in
    for(int i=0; i<MAX; i++) {
        if (listArray[i].data() == x) {
            listArray[i].erase();
        }
    }
}
void List::ReverseDisplay() {            //reverses display of the strings in the array starting from the last filled index
for(int i=MAX;i>=0; i-- ){
        if (listArray->empty()) {
            cout<<"array is empty please insert values"<<endl;
            break;
        }else if (!listArray[i].empty()){
            cout << listArray[i].data()<<endl;
        }

    }
}

void List::Display(string type) {             //displays all strings in array, odd length strings, or even length strings depending on user input of odd, even or all
    if (type=="odd"){
       // if (listArray.
     // cout<<listArray->data()

    }
    else if (type=="all"){
        for(int i=0;i<listArray->length();i++) {
            cout << listArray[i] << endl;
        }

    }
    else if (type=="even"){

    }else{
        cout<<"please try again and enter all, odd, or even"<<endl;
    }


}
void List::GetValueAt(int n) {                                           //returns the string in index n of the array
    cout<<"You selected index "<<n<<" : "<<listArray[n].data()<<endl;
}

/*
double List::Median() {

}

void List::Sort() {

}
void List::Shuffle() {

}*/

