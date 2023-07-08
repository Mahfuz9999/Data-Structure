#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    vector<string> S(n);

    for (int i = 0; i < n; i++)
    {
        getline(cin,S[i]);
    }
    for(string Z: S)
    {
        cout<<Z<<" ";
    }
    return 0;
}