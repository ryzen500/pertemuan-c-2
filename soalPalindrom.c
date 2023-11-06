#include <stdio.h>
#include <string.h>

int isPalindrome(const char *str) {
    int i = 0;
    int j = strlen(str) - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            return 0; // Bukan palindrom
        }
        i++;
        j--;
    }

    return 1; // Palindrom
}

int main() {
    char input[100];

    printf("Masukkan kata atau frasa: ");
    scanf("%s", input);

    if (isPalindrome(input)) {
        printf("%s adalah palindrom.\n", input);
    } else {
        printf("%s bukan palindrom.\n", input);
    }

    return 0;
}
