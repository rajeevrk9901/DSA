#include <iostream>
using namespace std;

//PRIME NUMBER 

int main()
{
    int n;
    cout << "Enter Number You Want To Check: ";
    cin >> n;

    for (int i = 2; i < n / 2; i++)
    {

        if (n % i == 0)
        {
            cout << "Not a Prime Number " << n;
            return 0;
        }
    }
    cout << "Prime Number " << n;
}