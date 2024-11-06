#include<bits/stdc++.h>
using namespace std;
void swap(int a,int b)
{
    a = a - b;
    b = a + b;
    a = b - a;
    cout<<a<<" "<<b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    return 0;
}