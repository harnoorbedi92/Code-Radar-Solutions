#include<stdio.h>
int main(){
    char ch='A','B','C','D','F';
    scanf("%c %c %c %c %c",&A,&B,&C,&D,&F);
    if(ch='A'){
        printf("Excellent");
       
    }
    else if(ch='B'){
        printf("Good");
    }
    else if(ch='C'){
        printf("Average");
    }
    if(ch='D'){
        printf("Below Average");
    }
    else{
        printf("Fail");
    }
    return 0;
}
