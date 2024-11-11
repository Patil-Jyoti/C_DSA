#include <stdio.h>

// Define the Address structure
struct Address {
    char street[50];
    char city[50];
    int zipCode;
};

// Define the Student structure, which contains Address as a member
struct Student {
    int id;
    char name[50];
    struct Address address;
};

int main() {
    // Declare and initialize a Student structure
    struct Student student1;

    // Assign values to student1's members
    student1.id = 101;
    snprintf(student1.name, sizeof(student1.name), "John Doe");

    // Assign values to the nested Address structure
    snprintf(student1.address.street, sizeof(student1.address.street), "123 Maple St");
    snprintf(student1.address.city, sizeof(student1.address.city), "Springfield");
    student1.address.zipCode = 12345;

    // Print out the Student information
    printf("Student ID: %d\n", student1.id);
    printf("Student Name: %s\n", student1.name);
    printf("Address: %s, %s, %d\n", student1.address.street, student1.address.city, student1.address.zipCode);

    return 0;
}
