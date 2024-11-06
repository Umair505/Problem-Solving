#include<bits/stdc++.h>
using namespace std;
vector<int>divisor(int n)
{
    vector<int>r;
    for(int i=1;i<=n;i++)
    {
        if(n % i==0) r.push_back(i);
    }
    return r;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            vector<int>v1;
            vector<int>v2;
            v1 = divisor(v[i]);
            v2 = divisor(v[j]);
            v1.insert(v1.end(),v2.begin(),v2.end());
            sort(v1.begin(),v1.end());
            if(v == v1)
            {
                cout<<v[i]<<" "<<v[j]<<endl;
                return 0 ;
            }
        }
    }
    return 0;
}