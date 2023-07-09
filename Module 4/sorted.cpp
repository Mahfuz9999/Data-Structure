#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin>>ar[i];
        }
        bool test=false;
        

        for (int i = 0; i < n; i++)
        {
            if(ar[i]<ar[i-1])
            {
                test = true;
            }
            
        }

        if(test == true) cout<<"NO"<<endl;
        else cout<< "YES"<<endl;

        
    }
    
    return 0;
}