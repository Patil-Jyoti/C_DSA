#include<stdio.h>

//3rd type
int add(){ //10 20
int x=10, y=20;
return x+y;//30

}
int main(){
int a=10, b=20;
int res=add();//calling a fun
printf("%d",res);//30
return 0;
}