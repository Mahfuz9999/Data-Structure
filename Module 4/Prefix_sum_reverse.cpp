#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long A[n];
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    
    long long Pre[n];
    Pre[0]=A[0];
    for (int i = 1; i < n; i++)
    {
        Pre[i]=Pre[i-1]+A[i];
    }

    for (int i = (n-1);i>=0 ; i--)
    {
        cout<<Pre[i]<<" ";
    }
    
    

    return 0;
}