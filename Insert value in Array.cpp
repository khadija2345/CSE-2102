#include<iostream>
using namespace std;
int main()
{
    int n,i,value,pos;
    cout<<"Array size: ";
    cin>>n;
    int arr[n];
    cout<<"Array elements:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"New elements: ";
    cin>>value;
    cout<<"Enter position: ";
    cin>>pos;
    for(i=0;i<n;i++)
    {
        if(i==pos-1)
        {
            arr[i]=value;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
