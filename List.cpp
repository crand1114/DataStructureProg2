

#include "List.h"
#include <iostream>
using namespace std;

List::List(){
    ElementType listArray[MAX];
}
 bool List::isEmpty() {         // method goes throught the array and checks for an empty index
     for(int i=0; i<MAX; i++){
         if(listArray[i].equals(null))
             return true;
     }
 }
void List::InsertAtEnd(ElementType x) {
 for(int i=0; i<MAX; i++){
     if(listArray[i].equals(null)){
         listArray[i]==x;
     }
 }
}
void List::DeleteAll(ElementType x) {


}
void List::Display(String type) {

}
void List::GetValueAt(int n) {

}
double List::Median() {

}
void List::Shuffle() {

}
void List::Sort() {

}
void List::Shuffle() {

}




