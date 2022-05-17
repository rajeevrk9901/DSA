#include <iostream>

using namespace std;

void display(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

void Merge(int arr[], int firsti, int midi, int lasti)
{
    int i = firsti, j = midi + 1, k = firsti;
    int temp[100];

    while (i <= midi && j <= lasti)
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }

    for (; i <= midi; i++)
    {
        temp[k++] = arr[i];
    }

    for (; j <= lasti; j++)
    {
        temp[k++] = arr[j];
    }

    for (int i = firsti; i <= lasti; i++)
    {
        arr[i] = temp[i];
    }
}

void MergeSort(int arr[], int firsti, int lasti)
{

    int mid;
    if (firsti < lasti)
    {
        mid = (firsti + lasti) / 2;

        MergeSort(arr, firsti, mid);
        MergeSort(arr, mid + 1, lasti);
        Merge(arr, firsti, mid, lasti);
    }
}

int main()
{

    int arr[] = {5, 8, 9, 4, 2, 1};

    int n = 6;

    MergeSort(arr, 0, 5);

    display(arr, n);
}