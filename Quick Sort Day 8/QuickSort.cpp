#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(int arr[], int firsti, int lasti)
{

    int pivot = arr[firsti];
    int count = 0;

    for (int i = firsti + 1; i <= lasti; i++)
    {
        if (arr[pivot] >= arr[i])
        {
            count++;
        }
    }

    // Place Pivot at Right Position
    int pivoti = firsti + count;

    swap(&arr[pivoti], &arr[firsti]);

    // Spliting left and right Part

    int i = firsti, j = lasti;
    while (i < pivoti && j > pivoti)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[i] > pivot)
        {
            j--;
        }

        if (i < pivoti && j > pivoti)
        {
            swap(&arr[i++], &arr[j--]);
        }
    }

    return pivoti;
}

void QuickSort(int arr[], int firsti, int lasti)
{

    if (firsti >= lasti)
    {
        return;
    }

    int p = Partition(arr, firsti, lasti);

    // left Sort
    QuickSort(arr, firsti, p - 1);

    // right sort
    QuickSort(arr, p + 1, lasti);
}

int main()
{
    int arr[] = {5, 1, 9, 77, 4, 11, 88, 21, 34};
    // int n = 9;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Total No.: " << n << "\n";
    QuickSort(arr, 0, n - 1);
    display(arr, n);
}