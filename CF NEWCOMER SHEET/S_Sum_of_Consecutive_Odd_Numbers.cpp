#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int a,b,a1,a2; cin>>a>>b;
        if(a>b){
            a1 = b;
            a2 = a;
        }
        else{
            a1 = a;
            a2 = b;
        }
        int sum =0;
        for(int i=a1+1;i<a2;i++)
        {
            if(i%2!=0)
            {
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }
     
    return 0;
}