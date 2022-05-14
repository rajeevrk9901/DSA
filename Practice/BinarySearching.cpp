#include <iostream>
using namespace std;

int RBubbleSearch(int A[], int l, int h, int key)
{
    int mid = 0;

    if (l <= h)
    {
        int mid = (l + h) / 2;
    

    if (key == A[mid])
    {
        return mid;
    }
    else if (key < A[mid])
    {

        return RBubbleSearch(A, l, mid - 1, key);
    }
    else
        return RBubbleSearch(A, mid + 1, h, key);
    }
    return -1;
}

int main()
{
    int A[] = {1, 3, 4, 6, 7, 8, 15};

    int key = 8;
    int n = 7;
    
   cout<<key<<" Found At Index: "<<RBubbleSearch(A,0,6,key);


}
