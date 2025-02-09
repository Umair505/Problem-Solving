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
        bool b = false;
        for(int j=0; j<s.length(); j++){
            if(s[j] == s[j+1])
            {
                b = true;
                break;
            }
        }
        if(b){
            cout<<1<<endl;
        }
        else
            cout<<s.length()<<endl;
    } 
    return 0;
}