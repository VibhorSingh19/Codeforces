#include <iostream>
#include <bits/stdc++.h> 
//Permutation Forgery shortcut approach
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],arr1[n-1],ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            ar[i]=arr[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
        
    }
    

    return 0;
}