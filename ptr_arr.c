#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int* ptr=arr;//1st element and i=0
    printf("%d\n",*(ptr+2)+*(ptr));//3+1=4

    
     
    return 0;
}