#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum=0;
    cin>>n;
    vector<long long int> a(n);
    long long int cntOdd = 0,cntEven = 0;
    long long int minOdd = LLONG_MAX; 
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if (a[i] % 2 == 1) {  
            minOdd = min(minOdd, a[i]);  
        }
        if(a[i]%2 == 0){
            cntEven++;
        }
        else{
            cntOdd++;
        }
        sum += a[i];
    } 
    if(cntOdd%2 == 0){
        cout<<sum<<endl;
    }
    else{
        sum -= minOdd;
        cout<<sum<<endl;
    }
    
    return 0;
}