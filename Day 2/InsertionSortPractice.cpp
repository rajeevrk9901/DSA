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
    for (int i = 1; i < n; i++) // Iteration Start From 1 Becuase We are A[0] Present In Sorted Array
    {
        int j = i - 1; // Means We Starting j with 0 // j=1-1 => 0
        int temp = A[i];

        while (j > -1 && A[j] > temp) // j Means We Are Working on Sorting part
        {
            A[j + 1] = A[j];
            j--;
        }

        A[j + 1] = temp;
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