#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    printf("Enter name");
    //scanf("%s",name); => without space
    fgets(str,sizeof(str),stdin);//can accept space
    str[strcspn(str,"\n")]=0;//remove last char .........
    printf("The name is : %s\n", str);
    int length=strlen(str);//
    printf("%d is the length of string", length);

    return 0;
}