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

void ReverseArray(int arr[], int starti, int lasti)
{

    while (starti >= lasti)
        return;

    swap(&arr[starti], &arr[lasti]);

    ReverseArray(arr, starti + 1, lasti - 1);
}

int main()
{

    int arr[] = {5, 8, 9, 4, 2, 1};

    int n = 6;

    ReverseArray(arr, 0, 5);

    display(arr, n);
}
