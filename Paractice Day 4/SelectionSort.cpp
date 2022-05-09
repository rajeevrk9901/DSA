#include <iostream>

using namespace std;

void Display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void SelectionSort(int a[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {

        int smallest = i;

        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[smallest])
            {
                smallest = j;
            }
        }

        swap(&a[i], &a[smallest]);
    }
}

int main()
{
    int a[] = {12, 4, 87, 17, 37, 31};
    int n = 6;

    SelectionSort(a, n);
    Display(a, n);
}