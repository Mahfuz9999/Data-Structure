#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v2 = {1, 2, 3};
    v2.push_back(344);

    vector<int> x = {1, 23, 4, 5, 6};

    v2.insert(v2.begin() + 3, x.begin(), x.end());

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << endl;
    }

    return 0;
}
