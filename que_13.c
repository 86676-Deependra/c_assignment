#include <stdio.h>
#include <string.h>

#define SIZE 10

int main() {
    char *arr[SIZE] = {
        "aaa", "bbb", "ooo", "aaa", 
        "ggg", "bbb", "ppp", "kkk", 
        "ggg", "mmm"
    };

    int i, j;
    int isDuplicate[SIZE] = {0};

    printf("Duplicate Strings in the Array:\n");
    for (i = 0; i < SIZE - 1; i++) {
        if (isDuplicate[i] == 1) {
            continue;
        }
        for (j = i + 1; j < SIZE; j++) {
            if (strcmp(arr[i], arr[j]) == 0) {
                if (isDuplicate[i] == 0) {
                    printf("%s\n", arr[i]);
                    isDuplicate[i] = 1;
                }
                isDuplicate[j] = 1;
            }
        }
    }

    return 0;
}
