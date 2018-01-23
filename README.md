# Assignment #2: List - Array Implementation

*Review pages 6-7 in "From Java to C++" notes.* 

*Due **Friday, Februaru 9th, 2017 @ 11:59PM EST***

## Directions
Create a `List` object. Using the following definition (`List.h` file is also in the repository for your convenience) for a list, implement the member functions (methods) for the List class and store the implementation in a file called `List.cpp`.  Use an array to implement the list. Write the client code (the main method and other non-class methods) and put those methods in file `main.cpp`. 

```
// file: List.h 
#include<string>
using namespace std;
typedef string ElementType;
const int MAX = 100;
class List
{
 public: 
   List(); // Create an empty list
   bool Empty(); // Return true if the list is empty, otherwise return false
   void InsertAtEnd(ElementType x); // Insert a value x at the end of the list
   void ReverseDisplay(); // Display the values in the list in reverse (do not reverse the actual list)
   void GetValueAt(int n); // Return the value at the provided location n
   void DeleteAll(ElementType x); // If value x is in the list, remove all instances of x
   void Display(); // Display the data values in the list
   void Sort(); // Sort the list of strings based on length (shortest to longest)
   double Median(); // Compute and return the median string length for the strings in the list
   void Shuffle(); // Shuffle the strings in the list around

 private:
	int N; // Number of values in list
  ElementType listArray[MAX]; // The array to hold the list values
};
```

Write a program to create a single list. Your client code should be menu driven using the following menu options:

```
  1. Insert
  2. Reverse Display
  3. Show Value at Location
  4. Delete Value
  5. Display
  6. Sort
  7. Show all even length value
  8. Shuffle
  9. Exit
```
**Option 1:** Prompt the user for a non-empty string to insert at the end of the list.

**Option 2:** Prompt the user for which string to remove from list. Remove every instance of the value specified.

**Option 3:** Display all of the values in the list.

**Option 4:** Sort the values in the list based on string length from shortest to longest.

**Option 5:** Find the average length of the strings in the list and display it.

**Option 6:** Find the medium length of the strings in the list and display it.

**Option 7:** Shuffle the strings in the list around.

**Option 8:** Exit the program.

