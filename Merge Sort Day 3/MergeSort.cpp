#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void display(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

void MergeSort(int arr[], int lefti, int righti)
{
}

int main()
{

    int arr[] = {5, 8, 9, 4, 2, 1};

    int n = 6;

    MergeSort(arr, 0, 5);

    display(arr, n);
}