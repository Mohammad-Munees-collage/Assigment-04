#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    int end = strlen(str)- 1;
    for (int i = 0; i < strlen(str) / 2; i++) {
        if (tolower(str[i]) == tolower(str[end])) {
            count++;
        }
        end--;
    }
    if (count == strlen(str)/2 && strlen(str) > 0) {
        printf("is palindrome");
    } else {
        printf("not palindrome");
    }
    return 0;
}
