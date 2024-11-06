#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, ki, kj, qi, qj;
        cin >> a >> b >> ki >> kj >> qi >> qj;
        int cnt = 0;
        vector<pair<int,int>> dx = {{a,b},{-a,b},{a,-b},{-a,-b},{b,a},{-b,a},{b,-a},{-b,-a}};
        set<pair<int,int>> s1;
        set<pair<int,int>> s2;
        for(int i = 0; i < 8; i++)
        {
            s1.insert({dx[i].first + ki, dx[i].second + kj});
            s2.insert({dx[i].first + qi, dx[i].second + qj});
        }
        for(auto i : s1)
        {
            if(s2.find(i) != s2.end())
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    } 
    return 0;
}
