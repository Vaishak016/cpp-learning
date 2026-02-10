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

    for(int i=0; i<n; i++)
    {
        cout << arr[i];
    }
}
int main()
{
    int n;
    cout << "How many elements do you want in the array?" << endl;
    cin >> n;

    int i;
    vector<int> arr(n);
    cout << "Enter the elements:" << endl;
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    nonnegative(arr);
    return 0;
}