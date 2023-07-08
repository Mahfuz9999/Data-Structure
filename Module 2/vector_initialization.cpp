#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector <int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector <int> b(n);
      for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }

    a.insert(a.begin()+0,b.begin(),b.end());

    for(int val : a)
    {
        cout<<val<<" ";
    }
    

    return 0;
}