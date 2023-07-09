#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    
    while (q--)
    {
        int x;
        cin>>x;
        bool j=false;
        int l=0,r=n-1;
        

        //binary search
        while(l<=r)
        {
            int mid = (l+r)/2; 
            if (ar[mid] == x)
            {
                j = true;
                break;
            }
            if(x>ar[mid])
            {
                l=mid+1;
            }
            else{
                r=mid-1;
            }


        }

        if(j==true) cout<<"found"<<endl;
        else cout<<"not found"<<endl;

        
    }
    

    return 0;
}