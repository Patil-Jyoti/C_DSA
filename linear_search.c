#include<stdio.h>
int main(){
int a[]={1,2,6,7,8};//5x4=20
int n=sizeof(a)/sizeof(a[0]);//20/4=5
int target;
printf("Enter key value to be searched");
scanf("%d", &target);//..
for(int i=0; i<n; i++){
if(target==a[i]){
    printf("The element is present at index %d\n",i);
    return 0;//end
}
}
printf("the element is not present!");
    return 0;
}