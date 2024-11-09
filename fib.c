#include<stdio.h>
int main(){
    int n1=0;
    int n2=1;
    int n=5;
    for(int i=1; i<=n; i++){
        int n3=n1+n2;
        printf("%d ",n1);//0
        n1=n2;
        n2=n3;
    }
    return 0;
}