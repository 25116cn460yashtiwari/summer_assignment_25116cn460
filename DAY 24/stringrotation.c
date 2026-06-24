#include <stdio.h>
#include <string.h>

// Function to check if str2 is rotation of str1
int isRotation(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Lengths must be equal
    if (len1 != len2) {
        return 0;
    }


    char temp[200];  // max length < 100
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is substring of temp
    return strstr(temp, str2) != NULL;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // remove newline

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // remove newline

    if (isRotation(str1, str2)) {
        printf("Strings are rotations of each other.\n");
    } else {
        printf("Strings are NOT rotations of each other.\n");
    }

    return 0;
}
