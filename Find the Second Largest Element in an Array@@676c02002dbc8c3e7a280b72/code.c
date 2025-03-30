#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int smax=arr[0];
    for(int i=0;i<=n-1;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        
    }
    for(int i=0;i<=n-1;i++){
        if(arr[i]!=max && arr[i]>smax){
            smax=arr[i];
            break;
             
             
        }
        
        }
        printf("%d",smax);
    
   
    return 0;
}