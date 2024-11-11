#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char a[50]="Hello";
    char c[70]="world!";
    char b[50];

    strcpy(b,a);
    printf("copied string is %s\n",b);
    printf(" length of cpy str is %d\n",strlen(b));
    strcat(a,b);
       printf("concatinated str1 %s\n",a);//hellohello
strcat(b,c);
printf("concatinated str2 %s\n",b);//helloworld
    //a<b
    int res=strcmp(a,b);//hellohello < helloworld =>-1
       printf("%d\n",res);
       if(res==0){
        printf("both strings are equal\n");
       }
       else if(res==-1){
         printf("string1 is lesser than str2\n");
       }
       else{
        printf("string1 is great2r than str2\n");
       }
       //0=>both r same  ,-1 str1 is less   ,  +1 str1 is greater
   //reverse
       printf("%s\n",strrev(a));

       //upper
       for(int i=0; a[i]!='\0'; i++){//'\n'
        a[i]=toupper(a[i]);
       }
       printf("%s", a);
//lowercase.....
       for(int i=0; a[i]!='\0'; i++){//'\n'
        a[i]=tolower(a[i]);
       }
       printf("%s", a);
       
           return 0;
}