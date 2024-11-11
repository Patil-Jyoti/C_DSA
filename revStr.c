#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "madam";
    int start = 0;
    int end = strlen(str) - 1;
    int isPalindrome = 1;

    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}