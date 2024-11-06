#include<stdio.h>
int main()
{
   int n,a;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    int ans=-1;
    for(int i=0;i<n;i++){
        if(a==arr[i]){
            ans=i;
            break;
        }
    }
    printf("%d",ans);
    return 0;
}
// Given a number N and an array A of N numbers. Determine if the number X exists in array A or not and print its position (0-index).

// Note: X may be found once or more than once and may not be found.
// Print the position of X in the first time you find it. If it doesn't exist print -1.
