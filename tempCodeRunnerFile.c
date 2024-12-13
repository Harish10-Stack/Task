#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256

int main() {
    char str[100];
    int freq[MAX_CHAR] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    str[strcspn(str, "\n")] = '\0';


    for (int i = 0; i < strlen(str); i++) {
        freq[str[i]]++;
    }


    int found = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (freq[str[i]] == 1) {
            printf("The first non-repeating character is: %c\n", str[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("There are no non-repeating characters in the string.\n");
    }

    return 0;
}