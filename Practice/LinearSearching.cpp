#include<iostream>
using namespace std;

int main()
{
int A[]={12 , 18 , 1 , 7 , 5};
int key = 7;
int count = 0;

for (int i = 0; i < 5; i++)
{
    if(A[i]==key){
        cout<< "Found at index: " << i << "\nKey : "<<key;
        count=1;
    }    
    
}

if(count==0){
cout<<"Not Found";
}

return 0;
}