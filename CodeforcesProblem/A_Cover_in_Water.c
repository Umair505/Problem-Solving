#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char s[100];
        scanf("%s",s);
        int cnt=0,cnt1=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.')cnt++;
            if(s[i]=='.')cnt1++;
        }
        if(cnt>=1)printf("2\n");
        else printf("%d\n",cnt1);
    }
    return 0;
}