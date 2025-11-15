#include <stdio.h>
#include <string.h>

int main() {
    char s[105];
    scanf("%s", s);

    for (int i = 0; i < strlen(s); i++) {
        char c = s[i];
        if (c >= 'A' && c <= 'Z') {
            // uppercase → make it lowercase
            s[i] = c + ('a' - 'A');
        } else if (c >= 'a' && c <= 'z') {
            // lowercase → make it uppercase
            s[i] = c - ('a' - 'A');
        }
    }

    printf("%s\n", s);
    return 0;
}