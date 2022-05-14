#include <iostream>
using namespace std;



void display(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

void InsertionSort(int A[], int n)
{

    for (int i = 0; i < n; i++)
    {
        // Write Your Code Here
    }
}

int main()
{
    int A[] = {5, 1, 9, 77, 4, 11, 88, 21, 34};
    // int n = 9;
    int n = sizeof(A) / sizeof(A[0]);
    cout << "Total No.: " << n << "\n";
    InsertionSort(A, n);
    display(A, n);
}
