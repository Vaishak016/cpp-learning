#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i;
    cout << "Enter the number the unmber of elements you want in the array" << endl;
    cin >> i;

    vector<int> arr(i);
    int j;
    cout << "Enter the elements:" << endl;
    for(j=0; j<i;j++)
    {
        cin >> arr[j];
    }
    
    int key;
    cout << "Enter the element you want to find the occurance of:" << endl;
    cin >> key;

    int count;
    count = 0;
    for(j=0;j<i;j++)
    {
        if(key == arr[j])
        {
            count ++;
        }
    }
    cout << "The element " << key << " occured " << count << " times." << endl;
    return 0;
}