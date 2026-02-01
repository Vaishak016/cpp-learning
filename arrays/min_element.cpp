#include<iostream>
using namespace std;
int main()
{
    int j;
    cout << "Enter the number of elements you want in the array:" << endl;
    cin >> j;

    int arr[j], i;
    cout << "Enter the elements:" << endl;
    for(i=0; i<j; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0];
    for(i=0; i<j; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    cout << "The minimum element is:" << min;

    return 0;
}