#include<iostream>
using namespace std;
int main()
{
    int i,n,l,u,mid,value;
    cout<<"Array Size: ";
    cin>>n;
    int arr[n];
    cout<<"Array Elements:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    l=0;
    u=n-1;
    cout<<"Searching Elements:\n";
    cin>>value;
    while(l<=u)
    {
        mid=(l+u)/2;
        if(l>u)
        {
            cout<<"No elements in Array";
            break;
        }
        else if(arr[mid]==value)
        {
            cout<<"Elements found at Position: "<<mid+1<<endl;
            break;
        }
        else if(arr[mid]<value)
        {
            l=mid+1;
        }
        else
        {
            u=mid-1;
        }
    }
}
