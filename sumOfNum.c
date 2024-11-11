#include<stdio.h>
int main(){
    int i,sum=1,n;
    //1+2+3+4+5+6+7+8+9+10=55
    for( i=1; i<=10; i++){
        
        sum*=i;//sum=sum+i;//1+2=3

    }
        printf("%d",sum);//55
    return 0;
}