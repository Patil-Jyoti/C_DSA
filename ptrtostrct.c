#include <stdio.h>
#include <string.h>
int main(){
    struct person{
        int age;
        char name[20];
        float marks;
    };
    //initilize to struct
struct person p1={78,"Ajay",90.99};
struct person *ptr=&p1;

printf(" age is %d\n", ptr->age);
printf(" name is %s\n", ptr->name);
printf(" marks is %.2f", ptr->marks);
    return 0;
}