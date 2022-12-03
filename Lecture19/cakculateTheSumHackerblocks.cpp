#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
int main() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    ll sum=0;
    for(auto x:a)sum+=x;

    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        sum=(sum%mod + sum%mod)%mod;
    }
    cout<<sum<<endl;
    return 0;
}
