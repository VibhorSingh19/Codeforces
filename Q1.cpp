#include <iostream>
#include <bits/stdc++.h> 
//Permutation Forgery brutforce method.
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
        
        for(int i=0;i<n-1;i++)
        {
            arr1[i]=arr[i]+arr[i+1];
        }
        int l=sizeof(arr1)/sizeof(arr1[0]);
        sort(arr1,arr1+l);
        
        int arr2[n-1];
        
        //sort(arr, arr + n); 
        //sort(ar,ar+n);
        do{ 
                int x=0;
                 for(int i=0;i<n;i++)
                    {
                      if(ar[i]!=arr[i])
                      x=1;
                    }
        if(x==1)
        {
                   
                for(int i=0;i<n-1;i++)
                {
                    arr2[i]=arr[i]+arr[i+1];
                }
                int l=sizeof(arr1)/sizeof(arr1[0]);
                sort(arr2,arr2+l);
                int f=0;
                for(int i=0;i<l;i++)
                {
                    if(arr2[i]!=arr1[i])
                    f=1;
                } 
                if(f==0)
                {
                for(int i=0;i<n;i++)
                {
                    cout<<arr[i]<<" ";
                } 
                break;
                    
                }
                
        }    
          }while (next_permutation(arr, arr + n)); 
        
    }
    

    return 0;
}
