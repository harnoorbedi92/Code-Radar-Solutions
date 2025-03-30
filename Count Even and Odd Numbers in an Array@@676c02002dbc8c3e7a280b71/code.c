#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    scanf("%d",&arr[n]);
    for(int i=0; i<=n;i++){
        if(n%2==0 && n%2!=0){
          printf("%d %d",n%2==0,n%2!=0);
        }
    }
    return 0;
}