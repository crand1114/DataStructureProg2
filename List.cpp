

#include "List.h"
#include <iostream>
using namespace std;

List::List(){
    ElementType listArray[MAX];
}
bool List::isEmpty() {         // method goes through the array and checks for an empty index
    for(int i=0; i<MAX; i++){
        if(listArray[i].empty())
            return true;
        cout<<"index "<<i<<" is empty"<<endl;
    }

}
void List::InsertAtEnd(ElementType x) {
    for(int i=0; i<MAX; i++){
        if(listArray[i].empty()){
            listArray[i]=x;
            break;
        }
    }
}
void List::DeleteAll(ElementType x) {
    for(int i=0; i<MAX; i++) {
        if (listArray[i].data() == x) {
            listArray[i].erase();
        }
    }
}
void List::ReverseDisplay() {
for(int i=MAX;i>=0; i-- ){
        if (listArray->empty()) {
            cout<<"array is empty please insert values"<<endl;
            break;
        }else if (!listArray[i].empty()){
            cout << listArray[i].data()<<endl;
        }

    }
}

/*void List::Display(String type) {
    if (type.equals("odd")){

    }
    if (type.equals("all")){
      if()
    }
    if (type.equals("even")){

    }


}*/
void List::GetValueAt(int n) {
            cout<<"You selected index "<<n<<" : "<<listArray[n].data()<<endl;
}
/*
double List::Median() {

}
void List::Shuffle() {

}
void List::Sort() {

}
void List::Shuffle() {

}*/

