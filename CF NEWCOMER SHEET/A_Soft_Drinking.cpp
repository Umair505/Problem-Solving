#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int t1 = (k * l)/nl;
    int t2 = c * d;
    int t3 = p / np;
    int minm = min(t1,t2);
    int minm2 = min(minm,t3);
    int ans = minm2/n;
    cout<<ans;
    return 0;
}