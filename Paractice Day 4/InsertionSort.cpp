#include <iostream>

using namespace std;

void Display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void InsertionSort(int a[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int j = i - 1;

        int temp = a[i];

        while (j > -1 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}

int main()
{
    int a[] = {12, 4, 87, 17, 37, 31};
    int n = 6;

    InsertionSort(a, n);
    Display(a, n);
}