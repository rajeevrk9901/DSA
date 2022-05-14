#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter No. ";
    cin >> n;

    int arr[n];

    // INPUT

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
// for(int X: arr){
//     cin>>X;
// }


    int max = arr[0];
    // int min = arr[0];

    for (int i = 0; i < n; i++)
    {

        if (max < arr[i])
        {
            max = arr[i];
            
        }
    }
cout << "Max No. is" <<max;
    return 0;
}