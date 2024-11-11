 #include <stdio.h>

int main() {
    char str1[100] = "Hello, ";
    char str2[] = "World!";
    int i = 0, j = 0;
    // (0)str1(end) 
    while (str1[i] != '\0') {// i=5 =>,!=null
        i++;//6 //7
    }
//i=7
//2nd loop j=0 j=end str2 
    while (str2[j] != '\0') {//i=8 j=1
        str1[i++] = str2[j++];//str1[8]=str2[1]=         
    }
    int length=strlen(str1);
    printf("%d",length);//

    str1[i] = '\0';//remove last char
    
    printf("%s\n", str1);//hello,world!
     length=strlen(str1);
    printf("%d",length);//
    
    return 0;
}