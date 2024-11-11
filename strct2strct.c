#include <stdio.h>
struct Address {
    char street[20];
    char city[20];
    char state[20];
};
struct Person {
    int age;
    char name[20];
    struct Address address;//Nested strcture
};
int main() {
    struct Person person;

    printf("Enter name: ");
    scanf("%s", person.name);
    printf("Enter age: ");
    scanf("%d", &person.age);
    printf("Enter street: ");
    scanf("%s", person.address.street);//.....
    printf("Enter city: ");
    scanf("%s", person.address.city);
    printf("Enter state: ");
    scanf("%s", person.address.state);

    printf("\nName: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Street: %s\n", person.address.street);
    printf("City: %s\n", person.address.city);
    printf("State: %s\n", person.address.state);
    return 0;
}