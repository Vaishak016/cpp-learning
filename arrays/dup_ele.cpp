#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n; 
    cout << "Enter the number of elements you want in the array?" << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elemeents:" << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    vector<int> result;
    for(int i=0; i<arr.size(); i++)
    {
        bool isduplicate = false;
        for(int j=0; j<result.size(); j++)
        {
            if(arr[i] == result[j])
            {
                isduplicate = true;
                break;
            }
        }
        if(!isduplicate)
        {
            result.push_back(arr[i]);
        }
    }
    cout << "Array after removing the duplicate elements." << endl;
    for(int i=0; i<result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}