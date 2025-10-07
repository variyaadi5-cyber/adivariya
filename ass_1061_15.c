#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);  // Read entire line including spaces

    // Convert each character to uppercase
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') { // Check if lowercase
            str[i] = str[i] - 32;            // Convert to uppercase
        }
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}

