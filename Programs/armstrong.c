// A program to find all armstrong numbers between n and m
#include <stdio.h>
int main() {
    int n, m;

    printf("Enter lower and upper limits: ");
    scanf("%d%d", &n, &m);

    printf("Armstrong numbers between %d and %d are:\n", n, m);

    for (int i = n; i <= m; i++) {
        int num = i, sum = 0, digit;

        while (num > 0) {
            digit = num % 10;
            sum += digit * digit * digit;
            num /= 10;
        }

        if (sum == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}