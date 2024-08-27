#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define ALPHABET_COUNT 26

int main() {
    char str[100];
    int freq[ALPHABET_COUNT] = {0};
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; i < strlen(str); i++) {
        char ch = str[i];
        if (isalpha(ch)) {
            ch = toupper(ch);
            freq[ch - 'A']++; 
        }
    }
    printf("Output:\n");
    for (int i = 0; i < ALPHABET_COUNT; i++) {
        if (freq[i] > 0) {
            printf("%c : %d\n", 'A' + i, freq[i]);
        }
    }

    return 0;
}
