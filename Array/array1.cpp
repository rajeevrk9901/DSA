#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter No. ";
    cin>>n;

int arr[n];

// INPUT

for (int i =0; i < n; i++)
{
    cin>>arr[i];
}

for ( int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}


}