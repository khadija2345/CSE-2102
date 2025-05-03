#include<iostream>
using namespace std;
int main()
{
    int n,i,value,pos=-1;
    cout<<"Size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Input the Array elements:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Input the Value:\n";
    cin>>value;
    for(i=0;i<n;i++)
    {
        if(arr[i]==value)
        {
           pos=1;
           break;
        }
    }
    if(pos==1)
    {
        cout<<"The value is Exit";
    }
    else
    {
        cout<<"The value is Not Exit";
    }
}
