#include <stdio.h>
int main() {

    int n;
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int s = 0, d = 0,w=0;
    int l=0,r=n-1;
    while(l<=r)
    {
        if(w%2==0)
        {
            if(a[l]>a[r])
            {
                s +=a[l];
                l++;
            }
            else{
                s +=a[r];
                r--;
            }

        }
        else
        {
            if(a[l]>a[r])
            {
                s += a[l];
                l++;
            }
            else{
                s += a[r];
                r--;
            }

        }
        w++;
    }
    printf("%d %d",s,r);

   
    return 0;
}
