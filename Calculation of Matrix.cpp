#include<iostream>
using namespace std;
int main()
{
    int i,j,r1,c1,r2,c2,k,n;
    cout<<"Row and Col of Matrix A: ";
    cin>>r1>>c1;
    int A[r1][c1];
    cout<<"Row and Col of Matrix B: ";
    cin>>r2>>c2;
    int B[r2][c2];
    cout<<" Clik 1 for SUM:\n Clik 2 for SUBTRACTION:\n Clik 3 for MULTIPLICATION:\n";
    int C[100][100];
    cin>>n;
    if(n==1)
    {
        if(r1==r2 && c1==c2)
        {
        cout<<"Input elements of Matrix A:\n";
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                cout<<"A["<<i<<"]["<<j<<"]=";
                cin>>A[i][j];
            }
        }
        cout<<"Input elements of Matrix B:\n";
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                cout<<"B["<<i<<"]["<<j<<"]=";
                cin>>B[i][j];
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                C[i][j]=A[i][j]+B[i][j];
            }
        }
        cout<<"Result Matrix:\n";
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                cout<<C[i][j]<<" ";
            }
            cout<<endl;
        }
        }
        else
        {
            cout<<"SUM is not possible";
        }
    }
    else if(n==2)
    {
        if(r1==r2 && c1==c2)
        {
        cout<<"Input elements of Matrix A:\n";
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                cout<<"A["<<i<<"]["<<j<<"]=";
                cin>>A[i][j];
            }
        }
        cout<<"Input elements of Matrix B:\n";
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                cout<<"B["<<i<<"]["<<j<<"]=";
                cin>>B[i][j];
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                C[i][j]=A[i][j]-B[i][j];
            }
        }
        cout<<"Result Matrix:\n";
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                cout<<C[i][j]<<" ";
            }
            cout<<endl;
        }
        }
        else
        {
            cout<<"SUBTRUCTION is not possible";
        }
    }
    else if(n==3)
    {
        if(c1==r2)
        {
        cout<<"Input elements of Matrix A:\n";
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                cout<<"A["<<i<<"]["<<j<<"]=";
                cin>>A[i][j];
            }
        }
        cout<<"Input elements of Matrix B:\n";
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                cout<<"B["<<i<<"]["<<j<<"]=";
                cin>>B[i][j];
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<c1;k++)
                {
                    C[i][j]+=A[i][k]*B[k][j];
                }
            }
        }
        cout<<"Result Matrix:\n";
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                cout<<C[i][j]<<" ";
            }
            cout<<endl;
        }
        }
        else
        {
            cout<<"MULTIPLICATION is not possible";
        }
    }

}
