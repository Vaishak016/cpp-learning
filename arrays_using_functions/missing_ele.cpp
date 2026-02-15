#include<iostream>
#include<vector>
using namespace std;

int findmissingelement(vector<int> &arr)
{
    int n = arr.size();
    int N = n + 1; // since one element is missing
    int expected_sum = N * (N + 1) / 2; // sum of first N natural numbers
    
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return expected_sum - sum;
}

int main()
{
    int n; 
    cout << "Enter the number of elements you want in the array?" << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements:" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = findmissingelement(arr);
    cout << "The missing element is: " << ans << endl;
    return 0;
}