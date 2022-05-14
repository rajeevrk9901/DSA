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

void BubbleSort(int A[], int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(&A[j], &A[j + 1]);
            }
        }
    }
}

int main()
{
    int A[] = {5, 1, 9, 77, 4, 11, 88, 34};
    //int n = 8;
    int n = sizeof(A) / sizeof(A[0]);
    cout<<n<<"\n";
    BubbleSort(A, n);
    display(A, n);
}