#include<stdio.h>
int main(){
int num=123;
int sum=0,digit=0;
while(num!=0){//0!=0->f
    digit=num%10;//1%10=1
    sum+=digit;//3+0=3+2=5+1=6
    num/=10;//123/10=1/10=0
}
printf("%d",sum);

    return 0;

}