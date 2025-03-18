#include <stdio.h>

int main() {

    int n, a=0, b=1, next;

    printf("enter n value");
    scanf("%i", &n);

    printf("fib series");

    for(int i=0; i<n; i++) {
        printf("%i", a);

        next = a+b;
        a=b;
        b=next;

    }

    return 0;



}