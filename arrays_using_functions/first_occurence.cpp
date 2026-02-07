#include<iostream>
#include<vector>
using namespace std;
int firstoccurence(const vector<int> & arr, int j)
{
    int n = arr.size();
    for(int i=0; i<n; i++)
    {
        if(j == arr[i])
        {
            return i;
        }
    }
    return -1;

}
int main()
{
    int n;
    cout <<"How many elements do you want in the array?" << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements:" << endl;
    int i;
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int j;
    cout << "Enter the element you want to find in the array:" << endl;
    cin >> j; 
    
    int ans = firstoccurence(arr, j);
    if(ans == -1)
    {
        cout << "Element not found.";
    }
    else
    {
        cout << "We found the element "<< j << " at index " << ans;
    }

    return 0;
}