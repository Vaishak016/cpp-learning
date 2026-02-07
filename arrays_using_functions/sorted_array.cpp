#include<iostream>
#include<vector>
using namespace std;
bool sortedarray(vector<int> & arr)
{
    int n = arr.size();
    int i =0;
    int j = i+1;
    while(j<n)
    {
        if(arr[i]>arr[j])
        {
            return false;
            break;        
        }
        i++;
        j++; 
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter the number of elements you want in the array:" << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements:" << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    bool ans = sortedarray(arr);
    if(ans)
    {
        cout << "The array is sorted.";
    }
    else
    {
        cout << "The array is not sorted.";
    }


    return 0;
}