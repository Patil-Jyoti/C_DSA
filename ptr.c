#include<stdio.h>
int main(){
    int a=10;//variable
    int *ptr;//pointer
    char b='s';
    char* ptr1=&b;
    ptr=&a;// ptr has add of var a
    printf("The value of a is %d\n",a);//10
 printf("The address of a is %u\n",&a);//address.....
  printf("The ptr is %p\n",ptr);//.....add of a 2189FFa
  printf("The size of ptr is %d\n",sizeof(ptr));//*->value at ptr 10
  printf("The size of ptr is %d\n",sizeof(ptr1));
    return 0;
}