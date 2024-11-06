#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char mat[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            scanf(" %c",&mat[i][j]);
        }
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]=='1')cnt++;
            }
            if(cnt==1)break;
            else cnt = 0;
        }
        if(cnt==1)printf("TRIANGLE\n");
        else printf("SQUARE\n");
    }
    return 0;
}