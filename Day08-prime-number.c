#include <stdio.h>

int prime(){
    int n, cout = 0;
    printf("Enter the number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){

        if (n % i == 0)
        {
            cout++;
        }
    if (cout == 2)
    {
        printf("Its a prime number:");
    }
    else{
        printf("Not a prime number");
    }
    }
    
}
int main(){

    prime();
    return 0;
}