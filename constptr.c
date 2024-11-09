#include<stdio.h>
int main(){
    int a=10;
    int b=20;
    int* const ptr=&a; //ptr->address
    ptr=&b;//error
    *ptr=30; //*ptr->value
    printf(" the value of ptr is %d",*ptr);//20
    return 0;
}