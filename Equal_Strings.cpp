#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str1, str2;
        cin >> str1 >> str2;
        string store = "";
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (str2[i] != str1[i])
                store = store + str2[i];
        }
        sort(store.begin(), store.end());
        for (int i = 0; i < store.size() - 1; i++)
        {
            if (store[i] != store[i + 1])
                count++;
        }

        cout << count + 1 << endl;
    }
    return 0;
}