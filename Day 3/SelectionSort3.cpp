#include <iostream>
using namespace std;

void display(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void SelectionSort(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallest = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[smallest])
                smallest = j;
        }
        swap(&A[i], &A[smallest]);
    }
}

int main()
{
    int A[] = {5, 1, 9, 77, 4, 11, 88, 21, 34};
    // int n = 9;
    int n = sizeof(A) / sizeof(A[0]);
    cout << "Total No.: " << n << "\n";
    SelectionSort(A, n);
    display(A, n);
}