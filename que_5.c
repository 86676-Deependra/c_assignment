#include <stdio.h>
#include <ctype.h>

int main() {
    char input;
    int uppercase = 0, lowercase = 0, digits = 0, others = 0;

    printf("Enter characters (Press Enter to stop): \n");

    while ((input = getchar()) != '\n') {
        if (isupper(input)) {
            uppercase++;
        } else if (islower(input)) {
            lowercase++;
        } else if (isdigit(input)) {
            digits++;
        } else {
            others++;
        }
    }

    printf("\nCharacter Count:\n");
    printf("Uppercase Letters: %d\n", uppercase);
    printf("Lowercase Letters: %d\n", lowercase);
    printf("Digits: %d\n", digits);
    printf("Other Characters: %d\n", others);

    return 0;
}
