#include <stdio.h>
#include <ctype.h>  // for to lower()

int main() {
    char str[200];
    int vowels = 0, consonants = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Reads input including spaces

    // Traverse each character
    for(i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);  

        if(ch >= 'a' && ch <= 'z') {  // Check only alphabets
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Number of vowels = %d\n", vowels);
    printf("Number of consonants = %d\n", consonants);

    return 0;
}
