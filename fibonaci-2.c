#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Masukkan harus lebih dari 0.\n");
    } else {
        printf("Deret Fibonacci hingga %d:\n", n);

        if (n >= 1) {
            printf("%d ", first);
        }

        if (n >= 2) {
            printf("%d ", second);
        }

        for (int i = 3; i <= n; i++) {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
        printf("\n");
    }

    return 0;
}
