#include <iostream>
using namespace std;

int BinarySearch(int A[], int firsti, int lasti, int key)
{

    int mid = 0;

    if (firsti <= lasti)
    {

        mid = (firsti + lasti) / 2;
    }

    // cout << mid;

    if (A[mid] == key)
    {
        return mid;
    }

    if (A[mid] > key)
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

    int A[] = {2, 5, 7, 9, 11, 15, 17};
    int firsti = 0;
    int lasti = 6;
    int key = 5;
    int result = BinarySearch(A, firsti, lasti, key);

    if (result == -1)
    {
        cout << "Not Found";
    }
    else
    {
        cout << key << " Found At Index " << BinarySearch(A, firsti, lasti, key);
    }

    return 0;
}