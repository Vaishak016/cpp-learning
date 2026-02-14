#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements do you want in the array?" << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements:" << endl;
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

    for(int i=0; i<result.size(); i++)
    {
        int count = 0;
        for(int j=0; j<arr.size(); j++)
        {
            if(result[i] == arr[j])
            {
                count++;
            }
        }
        cout << result[i] << " occurred -> " << count << " times." << endl;
    }

    return 0;
}