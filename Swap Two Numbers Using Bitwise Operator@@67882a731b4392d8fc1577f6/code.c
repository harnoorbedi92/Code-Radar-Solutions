#include <stdio.h>

int main() {
    int a,b ;
    a = a ^ b; 
    b = a ^ b;  
    a = a ^ b;  
    printf(" %d ", a);

    return 0;
}