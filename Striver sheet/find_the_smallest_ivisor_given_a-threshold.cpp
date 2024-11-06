//You are given an array of integers 'arr' and an integer i.e. a threshold value 'limit'. Your task is to find the smallest positive integer divisor, such that upon dividing all the elements of the given array by it, the sum of the division's result is less than or equal to the given threshold value.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int lim; cin>>lim;
    int maxm = *max_element(v.begin(),v.end());
    int indx;
    for(int i=1;i<maxm;i++)
    {
        int sum = 0;
        for(int j=0;j<n;j++)
        {
            sum += ceil((double)(v[j]) / (double)(i));
        }
        if(sum<=lim)
        {
            cout<<i;
            break;
        }
    }
            // cout<<indx;
}
