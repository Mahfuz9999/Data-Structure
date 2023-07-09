#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
        // int y;
        // cin>>y;
        // A.push_back(y);
    }
    int m;
    cin>>m;
    vector<int>B(m);
    for (int i = 0; i < m; i++)
    {
        cin>>B[i];
        // int y;
        // cin>>y;
        // B.push_back(y);
    }
    int x;
    cin>>x;

    A.insert(A.begin()+x,B.begin(),B.end());

    for (int i = 0; i < n+m; i++)
    {
        cout<<A[i]<<" ";
    }
    


    return 0;
}