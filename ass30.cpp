#include <stdio.h>
int main() {
    int marks;
    char grade;
    printf("Enter the marks of the student: ");
    scanf("%d", &marks);
    switch(marks / 10) {
        case 10:   // 100 marks
        case 9:    // 90–99
            if (marks >= 95)
                grade = 'T';   // Grade AT
            else
                grade = 'A';   // Grade A
            break;

        case 8:    // 80–89
            grade = 'B';
            break;

        case 7:    // 70–79
            grade = 'C';
            break;

        default:   // below 70
            grade = 'F';
    }
    if (grade == 'T')
        printf("Grade: AT\n");
    else
        printf("Grade: %c\n", grade);
    return 0;
}