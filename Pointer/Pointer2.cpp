#include <iostream>
using namespace std;

int main()
{

     // Assigning A pointer

     int num = 5;
     int *p = &num; // *p means int is pointing to num

     //  NOTE  Copying A value Of Pointer p into q See Below

     int *q = p;

     cout << endl
          << *p; // Address of num and this is stored in p
     cout << endl
          << *q + 10;
     ; // Address of p is copied in q
}