#include <stdio.h>
#include <string.h>
int main(){
    struct person{
        int age;
        char name[20];
        float marks;
    };
    //initilize to struct
struct person p1;
printf("Enter user name");
fgets(p1.name,sizeof(p1.name),stdin);
p1.name[strcspn(p1.name,"\n")]=0;
printf("enter marks");
scanf("%f",&p1.marks);
printf("enter age");
scanf("%d",&p1.age);
printf(" age is %d\n", p1.age);
printf(" name is %s\n", p1.name);
printf(" marks is %.2f", p1.marks);
    return 0;
}