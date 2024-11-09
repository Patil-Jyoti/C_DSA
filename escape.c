#include <stdio.h>
int main() {
    printf("Demonstrating Escape Sequences:\n");
    // Newline
    printf("This is on the first line.\nThis is on the second line.\n\n");

    // Tab
    printf("Item\tPrice\n");
    printf("Apples\t$2.50\n");
    printf("Oranges\t$1.75\n\n");

    // Backslash
    printf("To print a backslash, use \\\\.\n");

    // Double quote
    printf("He said, \"Hello!\"\n");

    // Single quote
    printf("It\'s a beautiful day!\n");

    return 0;
}