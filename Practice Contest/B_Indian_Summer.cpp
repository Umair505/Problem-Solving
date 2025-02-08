#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<pair<string,string>>leaf;
    for(int i=0;i<n;i++)
    {
        string spec,color;
        cin>>spec>>color;
        leaf.insert({spec,color});
    }
    cout<<leaf.size()<<endl;
    return 0;
}