#include <stdio.h>
int main(){
    int cp;
    scanf("%d",&cp);
    int sp;
    scanf("%d",&sp);
    if(sp>cp){
        printf("Profit");
    }
    if(cp>sp){
        printf("Loss");
    }
    if(sp==cp){
        printf("No Profit No Loss");
    }
    return 0;
}