/* File:  listExample.cpp
 * This program uses a simple Node class to build 
 * a linked-list and then print the contents of the list.
 * CIS 279 Data Structures C++ 
 * Date: 9/18/16
 */

#include <iostream>
#include <cstdlib>
using namespace std;

typedef int ElementType;
class Node
{
public:
   ElementType data;
   Node * next;
   
   Node( )
   {
       data = ElementType();
       next = NULL;
   }       
   Node( ElementType initData )
   {
       data = initData;
       next = NULL;
   }
}; // end of Node class
   
   int main()
   {
     Node *first, *second, *third;
     first = new Node(100);
	  second = new Node(200);
	  third = new Node(300);
	  
	  // link nodes into a list
	  first->next = second;
	  second->next = third;
	  
	  // traverse the list to print
	  Node *ptr;	  
	  ptr = first;
	  while ( ptr != NULL )
	  {
	  	 cout << ptr->data << ' ';
	  	 ptr = ptr->next;
	  }
	  cout << endl;
	  	  
	  return 0;
   }

/*-----------OUTPUT-------------
100 200 300
Press any key to continue . . .
-------------------------------*/