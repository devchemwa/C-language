#include <stdio.h>

int main(){
    int a=0,b=0,c=0;
    printf("enter a number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);
    c = a + b;
    printf("sum: %d", c);

    return 0;
}