#include<stdio.h>
int main(){
    int a=4;//   0 1 0 0
    int b=2;//   0 0 1 0
    int c=b&a;// 0 0 0 0
    printf("%d\n", c);//0
    printf("%d\n", sizeof(c));
    int d=a++;
    printf("%d\n", d);//4->5
    int e=++a;//5+1=6
        printf("%d\n", e);
        int f=a++ + ++b; //6+3=9  =>a=7
            printf("%d\n", f);
        int g=++a + b++;//8+3=11 =>b=4
    printf("%d\n", g);
    return 0;
}