#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int secondLargest(const vector<int> & arr)
{
    int n = arr.size();
    if(n<2)
    {
        return -1;
    }

    int max = arr[0];
    for(int i = 1; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    int secondmax = INT_MIN;
    bool Found = false;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<max && arr[i]>secondmax)
        {
            secondmax = arr[i];
            Found = true;
        }
    }
    return Found ? secondmax : -1;
}

int main()
{
    int n;
    cout << "Enter the number of elements you want in the array:" << endl;
    cin >> n;

    int i;
    vector<int> arr(n);
    cout << "Enter the elements:" << endl;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int result = secondLargest(arr);
    
    if(result == -1)
    {
        cout << "Element not found"; 
    }
    else
    {
        cout << "The second largest element is:" << result;
    }
    return 0;
}