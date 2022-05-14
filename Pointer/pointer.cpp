#include<iostream>
using namespace std;

int main()
{
  
  int x= 15; // This Created In Stack

  int *p = &x;  // This Created in Heap

// cout<<&p;
cout<<*p<<endl;
// p++;  // Pointing To next element Which is Not Available
// cout<<*p;  // showing garbage value


}