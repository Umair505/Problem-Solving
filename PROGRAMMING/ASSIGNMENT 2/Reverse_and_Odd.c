#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int count =0;int a[n/2];
    for(int i=0;i<n;i++)
    { 
        if(i%2!=0){
     a[count]=A[i];
          count++;
        }
    }
    for(int i=count-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    
    return 0;
}