/* student.c */
#include <stdio.h>
#include "student.h"

/* Source file with structures
 * StudentData
 * StudentAddress
 */
void sstudent(void) {
    /* student is the variable of structure StudentData */
    struct StudentData student;

    /* Assigning values to StudentData */
    student.stu_name = "wangbo";
    student.stu_id = 123456;
    student.stu_age = 21;

    /* Assigning values to new structure StudentAddress */
    student.stuAddress.street = "24, vicala";
    student.stuAddress.state = "Minskaya";
    student.stuAddress.city = "Minsk";
    student.stuAddress.country = "Belarus";

    /* Displaying the values of struct members */
    printf("Hello, %s!", student.stu_name);
    printf("\nStudent Id is: %d", student.stu_id);
    printf("\nStudent Age is: %d", student.stu_age);
    printf("\nCountry: %s, Region: %s, City: %s, Address: %s",
           student.stuAddress.country,
           student.stuAddress.state,
           student.stuAddress.city,
           student.stuAddress.street);
    printf("\nGoodbye!");
}
int main() {
    sstudent();
    return 0;
}
