#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }

    sort(A,A+n);

    bool test = false;
    int i ,j;
    for (i = 0; i < (n-1); i++)
    {
        for (j = 1; j < n; j++)
        {
            if(i==j)
            {
                continue;
            }
            if(A[i] == A[j])
            {
            test = true;
            break;
               
            }
            
        }
        
    }
    if(test == true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    
    
    return 0;
}