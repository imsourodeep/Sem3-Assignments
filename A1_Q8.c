// 8. Check if string is palindrome.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, is_palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);  

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
