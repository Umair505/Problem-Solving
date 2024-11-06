#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[100];
        scanf("%s",s);
        int cnt1 =0,cnt0 = 0;
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]=='1')cnt1++;
            else cnt0++;
        }
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]=='1')
            {
                if(cnt0>0)cnt0--;
                else break;
            }
            else if(s[i]=='0')
            {
                if(cnt1>0)cnt1--;
                else break;
            }
        }
        printf("%d\n",cnt1 + cnt0);
    }
    return 0;
}