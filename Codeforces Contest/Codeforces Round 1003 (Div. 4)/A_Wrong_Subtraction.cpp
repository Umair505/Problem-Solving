#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k;
    cin>>n>>k;
    int num;
    while(k--)
    {
        if(n%10 > 0)
        {
            n--;
        }
        else{
            n /= 10;
        }
    }
    cout<<n<<endl;
    return 0;
}