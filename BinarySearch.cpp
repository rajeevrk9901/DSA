#include <iostream>
using namespace std;

// Binary Search
// Works On Sorted Array

int BinarySearch(int A[], int firsti, int lasti, int key)
{
    int mid = 0;

    if (firsti <= lasti)
    {
        mid = (firsti + lasti) / 2;
    }

    if (A[mid] == key)
    {
        return mid;
    }

    if (A[mid] < key)
    {
        return BinarySearch(A, mid + 1, lasti, key);
    }

    if (A[mid] < key)
    {
        return BinarySearch(A, firsti, mid - 1, key);
    }

    return -1;
}

int main()
{
    int A[] = {5, 7, 19, 21, 29, 34};
    int firsti = 0, lasti = 5;
    int key = 27;
    int result = BinarySearch(A, firsti, lasti, key);

    if (result == -1)
    {
        cout << "Not Found";
    }
    else
    {
        cout << key << " Found At Index " << BinarySearch(A, firsti, lasti, key);
    }
}