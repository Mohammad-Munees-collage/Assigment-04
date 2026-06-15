#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char str[100];
    int count=0;
    printf("Enter a string: ");
    fgets(str,100,stdin);
    str[strcspn(str, "\n")] = '\0';
    for(int i=0; i<str[i]!='\0'; i++) {
        char ch = tolower(str[i]);
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') {
            count++;
        }
    }
    printf("Total number of vowels: %d\n", count);
    return 0;
}
