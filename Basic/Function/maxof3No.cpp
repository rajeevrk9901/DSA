#include<iostream>
using namespace std;

int max(int a, int b, int c=0){

    return (a>b && a>c ) ? a:(b>c?b:c);  

    // Avoid Using cout cin in function;
    // Because of main function call

}


int main()
{
 cout<<max(9,11,87)<<endl;
 cout<<max(9,11);
 return 0;
}