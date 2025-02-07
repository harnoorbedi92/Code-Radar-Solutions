#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%4!=0){
        printf("Not a Leap Year");
    }else if (n%100==0 && n%400!=0){
        printf("Not a Leap Year");
    }
    else{
        printf("Leap Year");
    }
    return 0;
}