#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int secondlastmax(const vector<int> & arr)
{

    int n = arr.size();
    int min = INT_MAX;
    int secmin = INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(arr[i] < min)
        {
            secmin = min;
            min = arr[i];
        }
        else if(arr[i] > min && arr[i] < secmin)
        {
            secmin = arr[i];

        }
    }
    if(secmin == INT_MAX)
    {
        return -1;
    }

    return secmin;
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

    int ans = secondlastmax(arr);
    if(ans == INT_MAX)
    {
        cout << "Secondmax element not found";
    }
    else
    {
        cout << "The secondmax element is: " << ans;
    }

    return 0;
}