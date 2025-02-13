#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        if(i%n==0){
        printf("%d x %d = %d \n",n,i,n*i);
        }
    }
    return 0;
}