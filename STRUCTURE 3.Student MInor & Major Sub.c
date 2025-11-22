#include <stdio.h>

struct student {
    int roll_no;
    char name[50];
    char course[50];
    char major[50];
    char minor[50];
};

int main() {
    struct student s[5];
    int i, r, found = 0;


    for(i = 0; i < 5; i++) {
        printf("\nEnter Details of Student %d\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Course Name: ");
        scanf("%s", s[i].course);

        printf("Enter Major Subject: ");
        scanf("%s", s[i].major);

        printf("Enter Minor Subject: ");
        scanf("%s", s[i].minor);
    }

    // Print names of all students
    printf("List of All Students \n");
    for(i = 0; i < 5; i++) {
        printf("%s\n", s[i].name);
    }

    // Search by Roll Number
    printf("\nEnter Roll Number to display details: ");
    scanf("%d", &r);

    for(i = 0; i < 5; i++) {
        if(s[i].roll_no == r) {
            found = 1;
            printf("Student Details -----\n");
            printf("Roll No : %d\n", s[i].roll_no);
            printf("Name    : %s\n", s[i].name);
            printf("Course  : %s\n", s[i].course);
            printf("Major   : %s\n", s[i].major);
            printf("Minor   : %s\n", s[i].minor);
            break;
        }
         else {
        printf("Student with Roll No %d not found!\n", r);
    }

    }


    return 0;
}
