#include<stdio.h>
int max(int a,int b)
{
    if(a>b) return a;
    else return b;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x;
        scanf("%d %d",&n,&x);
        int a,p=0,ans=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a);
            ans = max(ans,a-p);
            p = a;
        }
        int b = 2*(x-p);
        ans = max(b,ans);
        printf("%d\n",ans);
    }
    return 0;
}