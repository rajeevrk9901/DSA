#include <iostream>
using namespace std;


// void swap(int *x, int *y)
// {
// int temp = *x;
// *x = *y;
// *y = temp;
// }

int main()
{
    int a[] = {3, 8, 15, 7, 2, 4};
    int arrsize = 6;

// Array Element Before Sorting
cout <<"Array Element Before Sorting\n";
   for (int i = 0; i <= arrsize - 1; i++)
    {
        cout <<a[i]<<" ";
    }
    

    for (int i = 0; i <= arrsize - 1; i++)
    {
        for (int j = 0; j <= arrsize - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                // swap(&a[j],&a[j+1]);
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

cout <<"\nArray Element After Sorting\n";

    for (int i = 0; i <= arrsize - 1; i++)
    {
        cout <<a[i]<<" ";
    }
}