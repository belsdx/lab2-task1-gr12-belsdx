/* student.h */

#ifndef STUDENT_H
#define STUDENT_H

/* Structure for Student Address */
struct StudentAddress {
    const char* street;
    const char* state;
    const char* city;
    const char* country;
};

/* Structure for Student Data */
struct StudentData {
    const char* stu_name;
    int stu_id;
    int stu_age;
    struct StudentAddress stuAddress; // Nested structure
};

/* Function prototype */
void sstudent(void);

#endif /* STUDENT_H */

