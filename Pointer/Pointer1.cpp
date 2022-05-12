#include <iostream>
using namespace std;

int main()
{

    // Assigning A pointer

    int num = 5;
    int *p = &num; // *p means int is pointing to num

    cout << num << "\n";
    cout << *p;

    cout << endl
         << p; // Address of num and this is stored in p
}