#include<iostream>
using namespace std;
int main()
{
    int j;
    cout << "How many elements do you want in the array?" << endl;
    cin >> j;

    int i, arr[j];
    cout << "Enter the elements:" << endl;
    for(i=0;i<j;i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    for(i=0; i<j; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    cout << "The maxmum number is:" << max;
    return 0;
}