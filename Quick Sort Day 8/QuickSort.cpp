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

    int temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(int arr[], int starti, int lasti)
{

    int pivot = arr[starti];
    int count = 0;
    int i = starti, j = lasti;

    for (int i = starti + 1; i <= lasti; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // cout << count;

    // Place pivot Value At Right Location
    int Pivoti = starti + count;

    swap(&arr[Pivoti], &arr[starti]);

    // spliting Left and right Part

    while (i < Pivoti && j > Pivoti)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < Pivoti && j > Pivoti)
        {
            swap(&arr[i++], &arr[j--]);
        }
    }

    return Pivoti;
}

void quickstartiort(int arr[], int starti, int lasti)
{

    if (starti >= lasti)
    {
        return;
    }

    int p = Partition(arr, starti, lasti);

    // left sort
    quickstartiort(arr, starti, p - 1);

    // right sort
    quickstartiort(arr, p + 1, lasti);
}

int main()
{
    int arr[9] = {5, 1, 9, 77, 4, 11, 88, 21, 34};
    // int n = 9;

    int n = sizeof(arr) / sizeof(arr[1]);
    cout << "Before Sorting: ";
    display(arr, 9);
    cout << "Total No.: " << n << "\n";
    cout << "After | QuickSort | Array is: ";
    quickstartiort(arr, 0, 8);
    display(arr, 9);

    return 0;
}