#include<bits/stdc++.h>
using namespace std;
// int rangesum(int L,int R)
// {
//     if(L>R) return 0;
//     return L+rangesum(L+1,R);
// }
int main() {
    int T;
    cin >> T;
    while (T--)
    {
        long long l,r; cin>>l>>r;
        if(l>r)
        {
            swap(l,r);
        }
        long long  totalNumber =r-l+1;
        long long rangesum = (totalNumber*(l+r))/2;
        cout<<rangesum<<endl;
    }
    
    // while (T--) {
    //     long long L, R;
    //     cin >> L >> R;
    //     long long sum;
    //     sum = rangesum(L,R);
    //     cout<<sum<<endl;
    // }

    return 0;
}
