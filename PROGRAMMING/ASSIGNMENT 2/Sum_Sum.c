#include<stdio.h>
int main()
{
    int a;int sum=0;
    scanf("%d",&a);
   
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){
        if(arr[i]>0){
        sum =sum + arr[i];
        }
    }printf("%d ",sum);
    int negSum=0;
    for(int i=0;i<a;i++){
        if(arr[i]<0){
        negSum =negSum + arr[i];
        }
    }printf("%d",negSum);
    return 0;
}