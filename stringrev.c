#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    int start = 0;
    int end = strlen(str) - 1;
    char temp;

    while (start < end) { //6<6
        temp = str[start];//temp=e
        str[start] = str[end];//str[1]=d 
        str[end] = temp;//H=>str[11]=e   //!d                 eH
        start++;//1
        end--;//11
    }

    printf("Reversed string: %s\n", str);//!drow ,olleH
    return 0;
}