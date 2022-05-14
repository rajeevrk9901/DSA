#include <iostream>
using namespace std;

int main()
{

    for (int i = 5; i >= 1; i--)  // For Row
    {
        for (int j = 1; j <= i ; j++)  // For Column
        {
             cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}