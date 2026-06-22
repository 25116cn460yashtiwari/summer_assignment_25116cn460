#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, flag = 1;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // Check palindrome
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("%s is a palindrome.\n", str);
    else
        printf("%s is not a palindrome.\n", str);

    return 0;
}
