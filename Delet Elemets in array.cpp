#include <iostream>
using namespace std;
int main() {
    int n, i, value, pos = -1;
    cout<<"Size of array: ";
    cin>>n;
    int arr[n];
    cout<<"elements of array\n";
    for(i = 0; i < n; i++)
        {
        cin>>arr[i];
        }

    cout<<"Delet element ";
    cin>>value;
    for(i = 0; i < n; i++)
        {
        if(arr[i] == value) {
            pos = i;
            break;
        }
    }
    if(pos == -1)
     {
        cout<<"no elements in array\n";
    }
    else
        {
        for(i=pos;i<n;i++)
         {
            arr[i] = arr[i + 1];
        }
        n--;
        cout<<"update array:\n";
        for(i = 0; i < n; i++)
         {
            cout<<" "<< arr[i];
        }
        cout<<endl;
    }
    return 0;
}


