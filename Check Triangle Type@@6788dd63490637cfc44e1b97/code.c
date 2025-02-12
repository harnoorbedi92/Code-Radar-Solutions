#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d ",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b){
        printf("  ");
    }
    else if(a==b && b==c && c==a){
        printf("Equilateral");
    }
    else if(a==b || b==c  || c==a){
        printf("Isoseceles");
    }
    else {
        printf("Scalene")
    }
    return 0;
}