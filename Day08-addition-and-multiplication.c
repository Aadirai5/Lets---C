#include <stdio.h>

int Addition(int a ,int b){
    return a + b;
}
int multiplication(int a , int b){
    return a * b;
}

int main(){
    printf("%d\n", Addition(12,23));
    printf("%d", multiplication(12,2));
    
    
    return 0;
}