#include<bits/stdc++.h>
using namespace std;
#define ll long long int
     int main()
{
    int t;
    cin>>t;
    while(t--)
        {
            int a,b;
            cin>>a>>b;
            if(a<6)
            cout<<b<<endl;
            else if(a%6==0)
            cout<<b*(a/6)<<endl;
            else
            cout<<((a/6)+1)*b<<endl;
        }
    return 0;
}