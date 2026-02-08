#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int secondmaxelement(const vector<int> & arr)
{

    int n = arr.size();
    int max = INT_MIN;
    int secmax = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > max)
        {
            secmax = max;
            max = arr[i];
        }
        else if(arr[i] < max && arr[i] > secmax)
        {
            secmax = arr[i];

        }
    }
    if(secmax == INT_MIN)
    {
        return -1;
    }

    return secmax;
}
int main()
{
    int n;
    cout << "Enter the number of elements you want in the array?" << endl;
    cin >> n;
    
    if(n<2)
    {
        cout << "Second max element not found.";
        return 0;
    }
    
    vector<int> arr(n);
    cout << "Enter the elements:" << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int ans = secondmaxelement(arr);
    if(ans == INT_MIN)
    {
        cout << "Secondmax element not found";
    }
    else
    {
        cout << "The secondmax element is: " << ans;
    }

    return 0;
}