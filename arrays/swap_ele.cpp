#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i;
    cout << "Enter the number of elements you want in the array:" << endl;
    cin >> i;

    int j;
    vector<int> arr(i);
    cout << "Enter the elements:" << endl;
    for(j=0;j<i;j++)
    {
        cin >> arr[j];
    }

    int k, temp;
    j = 0;
    k = i-1;
    while(j<k)
    {
        temp = arr[j];
        arr[j] = arr[k];
        arr[k] = temp;

        j++;
        k--;
    }

    cout << "the reversed array is:" << endl;
    for(j=0;j<i;j++)
    {
        cout << arr[j] << " ";
    }

    return 0;
}