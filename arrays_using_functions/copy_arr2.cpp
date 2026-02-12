#include<iostream>
#include<vector>
using namespace std;
void copyarray(const vector<int> &arr, vector<int> &copyarr)
{
    int n = arr.size();
    for(int i =0; i<n; i++)
    {
        copyarr[i] = arr[i];
    }
}
int main()
{
    int n;
    cout << "Enter the number of elements you want in the array?" << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements:" << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    vector<int> copyarr(n);
    copyarray(arr, copyarr);
    for(int i=0; i<n; i++)
    {
        cout << copyarr[i] << " ";
    }


    return 0;
}