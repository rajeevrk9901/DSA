#include<iostream>
using namespace std;

int main()
{
 int a[]={7,5,6,8,9};
    
 int sum = 0;

for(int i=0; i<sizeof(a)/sizeof(a[0]); i++ )  // Or i<5
{
    sum = sum+a[i];
}

cout<<sum;
    return 0;
}


