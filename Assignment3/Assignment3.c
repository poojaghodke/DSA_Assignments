#include <stdio.h>
#include <string.h>
#define SIZE 10


typedef struct {
    int rollno;
    char name[100];
    int marks;
} Student;

void swap(Student *a, Student *b) {
    Student temp = *a;
    *a = *b;
    *b = temp;
}

void sort_students_by_marks(Student arr[], int size) {
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j].marks > arr[j + 1].marks) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    Student students[SIZE] = {
        {1, "ab", 85},
        {2, "bc", 92},
        {3, "cd", 79},
        {4, "de", 95},
        {5, "ef", 88},
        {6, "fg", 70},
        {7, "gh", 80},
        {8, "hi", 90},
        {9, "ij", 76},
        {10, "jk", 82}
    };


    sort_students_by_marks(students, SIZE);

    printf("Students sorted by marks:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Roll No: %d, Name: %s, Marks: %d\n", students[i].rollno, students[i].name, students[i].marks);
    }

    return 0;
}
