#include<iostream>
#include<vector>
using namespace std;
void nonnegative(vector<int> & arr)
{
    int n = arr.size();
    for(int i=0; i<n; i++)
    {
        if(arr[i] < 0)
        {
            arr[i] = 0;
        }
    }
}
int main()
{
    int n;
    cout << "Enter the number of elements you want in the array?" << endl;
    cin >> n;

    vector<int> arr(n);
    int i;
    cout << "Enter the elements:" << endl;
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    nonnegative(arr);
    cout << "After changing the non-negative elements in the array:" << endl;
    for(i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}