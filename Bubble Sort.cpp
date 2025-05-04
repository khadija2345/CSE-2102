#include<iostream>
using namespace std;
int main()
{
    int n,i,j,temp;
    cout<<"Size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Input elements of Array:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        int flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
    cout<<"Sort Array: ";
    for(i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }

}
