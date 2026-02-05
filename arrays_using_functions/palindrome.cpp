#include<iostream>
using namespace std;
bool ispalindrome(char str[], int n)
{
    int i = 0;
    int j = n-1;
    while(i<j)
    {
        if(str[i] != str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{
    char str[100];
    cout << "Enter the word:" << endl;
    cin >> str;

    int n = 0;
    while(str[n] != '\0')
    {
        n++;
    }

    if(ispalindrome(str,n))
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Paindrome";
    }
    return 0;
}