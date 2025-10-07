#include <stdio.h>
#include <string.h>

void reverseWords(char str[]) {
    int len = strlen(str);
    int start = len - 1, end = len - 1;
    
    printf("Reversed words: ");
    
    while (start >= 0) {
        while (start >= 0 && str[start] != ' ')
            start--;
        for (int i = start + 1; i <= end; i++) {
            printf("%c", str[i]);
        }

        if (start >= 0) {
            printf(" "); 
        }
        end = start - 1;
        start = end;
    }
    printf("\n");
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    reverseWords(str);

    return 0;
}

