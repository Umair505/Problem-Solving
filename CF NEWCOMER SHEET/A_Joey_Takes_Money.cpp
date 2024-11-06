#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        long long product = 1;
        for(int i=1;i<=n;i++)
        {
            product *=a[i];
        }
        long long ans = (product+(n-1))*2022;
        cout<<ans<<endl;
    }

    return 0;
}