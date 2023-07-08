#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }


    while(q--)
    {
        int l,r;
        cin>>l>>r;
        l=l-1;
        r=r-1;
        int sum=0;

        for (int i = l; i <= r; i++)
        {
            
            sum = sum + a[i];
        }
        cout<<sum<<endl;
    }
    
    
    return 0;
}