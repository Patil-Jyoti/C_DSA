#include<stdio.h>
int main(){
int num=123;
int rev=0;

while(num!=0){  //0!=0->false
rev=rev*10+num%10;//3*10+2=32*10+1=321
	num/=10;//1/10=0

}
printf("%d\n",rev);//321

int orgNum=num;
if(orgNum==rev){
    printf("yes,pallindrome!...");
}
else{
   printf("not a pallindrome!...");
} 

return 0;
}