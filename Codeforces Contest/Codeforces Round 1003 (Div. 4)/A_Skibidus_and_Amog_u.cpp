#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        int pos = s.rfind("us"); 
        if (pos != -1) {
            s.replace(pos, 2, "i");
        }
        cout<<s<<endl;  
    } 
    return 0;
}