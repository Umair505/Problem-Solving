#include<bits/stdc++.h>
using namespace std;
long long summation(int arr[],int n,int i)
{
    if(i>=n)
    {
        return 0;
    }
    return arr[i] + summation(arr,n,i+1);
}
int main()
{
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long int sum = summation(arr,n,0);
    cout<<sum<<endl;
    return 0;
}