#include <stdio.h>
int main()
{
    int num=5;//global
    int res=factorial(num);//call
    printf("%d",res);
    printf("%d",num);//5
    return 0;
}
int factorial(int n){//0
    if(n==0){ //0==0?f//local
        return 1;
    }
    else{
        //recursion
        return n*factorial(n-1);//1*1*2*3*4*5*=120
    }
}