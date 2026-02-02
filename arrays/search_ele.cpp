#include<iostream>
using namespace std;
int main()
{
    int j;
    cout<<"How many numbers do you want in the array?" << endl;
    cin >> j;

    int i, arr[j];
    cout << "Enter the numbers:" << endl;
    for(i=0; i<j; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout << "Enter the number you want to find in the array:" << endl;
    cin >> key;

    bool Found = false;
    for(i=0; i<j; i++)
    {
        if(key == arr[i])
        {
            Found = true;
            break;
        }
    }
    
    if(Found == true)
    {
        cout << "Element found";
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}