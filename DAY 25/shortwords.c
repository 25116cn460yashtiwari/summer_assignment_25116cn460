#include <stdio.h>
#include <string.h>

int main() {
    char words[50][50], temp[50];
    int n, i, j;

    printf("Enter number of words: ");
    scanf("%d", &n);
    getchar(); // consume newline after number input

    printf("Enter %d words:\n", n);
    for (i = 0; i < n; i++) {
        fgets(words[i], sizeof(words[i]), stdin);
        words[i][strcspn(words[i], "\n")] = '\0';  // remove newline
    }

    // Sort words by length using bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("\nWords sorted by length:\n");
    for (i = 0; i < n; i++) {
        printf("%s (length: %lu)\n", words[i], strlen(words[i]));
    }

    return 0;
}
