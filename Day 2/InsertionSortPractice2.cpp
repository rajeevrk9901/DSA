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
    // Write Your Code Here
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int temp = A[i];

        while (j > -1 && A[j] > temp)
        {

            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = temp;
    }
}

int main()
{
    int A[] = {5, 1, 88, 9, 7, 4, 11, 21, 34};
    // int n = 9;
    int n = sizeof(A) / sizeof(A[0]);
    cout << "Total No.: " << n << "\n";
    InsertionSort(A, n);
    display(A, n);
}