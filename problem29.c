
#include<stdio.h>
#include<limits.h>
long long divide(long long dividend, long long divisor) {
    int max =2147483647;
    int min=-2147483648;
    if(dividend == -2147483648 && divisor == -1){
          return INT_MAX;
}

    if (divisor == 0) {
        return -1;
    }
     long long x = dividend / divisor;

    if (x > max) {
        printf("%d\n", max);
    } else if (x < min) {
        printf("%d", min);
    } else if (x == max || x == min) {
        if (x == max) {
            printf("%d\n", max);
        } else {
            printf(" %d\n", min);
        }
    } else {
        printf("%d\n", x);
    }

    return x;
}