#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    if(a>b && a>c){
        print("%d \n",a);
    }
     else if(b>a && b>c){
        print("%d/n",b);
     }
     else{
        printf("%d",c);
     }
      
    return 0;
}