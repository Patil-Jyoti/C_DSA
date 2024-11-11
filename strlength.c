//finding length without using inbulit functions
#include<stdio.h>
#include<string.h>
int main(){
    char str[100]="hello";
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    printf("the length of string without inbulit is %d",length);
    //inbuilt
 printf("the length of string with inbuilt fun is %d",strlen(str));

    return 0;

}