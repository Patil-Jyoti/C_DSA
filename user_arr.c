#include<stdio.h>
int main(){
    int n ;
    printf("Enter the no of elements");
    scanf("%d", &n);//5
    int arr[n];
    printf("Enter 5 elements");
    for(int i=0; i<n; i++ ){
        scanf("%d",&arr[i]);
    }
    printf("the arr elements are...");
    for(int i=n-1; i>=0; i-- ){
        printf("%d ",arr[i]);
    }
    return 0;
}