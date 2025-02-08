#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c =  b - a;
    if(c <= 0)
    {
        cout<<0<<endl;
    } 
    else{
        cout<<c+1<<endl;
    }
    return 0;
}