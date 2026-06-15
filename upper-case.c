#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    char str1[100];
    printf("Enter a string: ");
    fgets(str,100,stdin);
    str[strcspn(str, "\n")] = '\0';
    int i;
    for ( i=0; str[i]!='\0'; i++) {
        if(str[i]>='a' && str[i]<='z') {
            str1[i]= str[i]-32;
        } else {
            str1[i]= str[i];
        }
    }
    str1[i]='\0';
    puts(str1);
    return 0;
}
