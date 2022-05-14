#include <iostream>
using namespace std;

int LinearSearch(int A[], int key)
{

    int i;
    bool count = false;

    for (i = 0; i <= 5; i++)
    {

        if (key == A[i])
        {

            return i;  
        }
       
    }
return -1;

}

int main()
{

    int A[] = {5, 12, 15, 18, 53, 32};

int count = LinearSearch(A, 15);
   if (count == -1) {
cout<< "Element is not present in array";

   } else{
cout << "Element is present at index " << count;
   }
        
    return 0;

}