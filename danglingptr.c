#include<stdio.h>
int main(){
    int* ptr=(int*)malloc(sizeof(int));//4 bytes of mem for pointet <- type cast
    *ptr=10;
    printf("bfr free %d\n",*ptr);//10
free(ptr);//
printf("aftr free %d", *ptr);//random
    return 0;
}