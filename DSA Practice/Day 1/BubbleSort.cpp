#include <iostream>
using namespace std;

void Swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(int A[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                Swap(&A[j], &A[j+1]);
            }
        }
    } 
}

void Display(int A[] , int n){
for (int i = 0; i < n; i++)
{
    cout<<A[i]<<" ";
}
}

int main()
{

    int A[] = {5, 12, 15, 18, 53, 32};

    int n= sizeof(A)/sizeof(A[0]);

// cout<<n;

    BubbleSort(A, n);

// cout<<n;

    Display(A, n);

}