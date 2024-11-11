#include <stdio.h>
void func() {
    static int i = 0;//2
    printf("%d ", i);//0 1 2 
    i++;//3
}
int main() {
    for (int j = 0; j < 3; j++) {//3
        func();
    }
    return 0;
}