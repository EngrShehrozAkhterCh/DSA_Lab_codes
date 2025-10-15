#include <stdio.h>
#include "add.h"

int main() {
    int x, y, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    sum = add(x, y);
    printf("Sum = %d\n", sum);
    return 0;
}