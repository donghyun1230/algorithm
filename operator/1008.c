#include <stdio.h>

int main(void) {
    
    int a, b;

    scanf("%d %d" , &a , &b);

    double c;

    c = (double) a / b; // explicit casting

    printf("%.10f", c);

    return 0;
}

