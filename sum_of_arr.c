#include<stdio.h>
int main(){
int a[]={1,2, 3,4, 5};//max=5  min=1
int sum=0;
for(int i=0; i<5; i++){
    printf("%d\n ",a[i]+5);//1 2 3 4 5 => 6 7 8 9 10
sum+=a[i];//0+1
}
printf("sum is : %d ",sum);
 return 0;//end
}