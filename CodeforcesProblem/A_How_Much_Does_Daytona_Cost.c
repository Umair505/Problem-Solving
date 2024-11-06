#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,v;
        scanf("%d %d",&n,&v);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int found = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==v)
            {
                found = 1;
                break;
            }
        }
        if(found == 1)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}