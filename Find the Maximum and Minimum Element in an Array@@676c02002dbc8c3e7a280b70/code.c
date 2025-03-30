#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",arr[i]);
    }
    int max=0;
    int min=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>n){
            max++;
        }
        if(arr[i]<n){
            min++;
        }
    }
    printf("%d %d",max,min);
    return 0;
}