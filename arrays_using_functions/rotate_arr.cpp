#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> &arr, int start, int end)
{
    while(start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotateLeft(vector<int> &arr, int k)
{
    int n = arr.size();

    k = k % n;   // Important if k > n

    // Step 1: Reverse first k elements
    reverseArray(arr, 0, k - 1);

    // Step 2: Reverse remaining elements
    reverseArray(arr, k, n - 1);

    // Step 3: Reverse whole array
    reverseArray(arr, 0, n - 1);
}

int main()
{
    int n, k;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter K: ";
    cin >> k;

    rotateLeft(arr, k);

    cout << "Array after left rotation: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}