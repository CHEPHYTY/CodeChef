#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int a, b;
        cin >> a >> b;

        if ((b - a) % 3 == 0 || (b - a - 1) % 3 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}