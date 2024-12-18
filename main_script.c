#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void decision();
void add_student();

struct student {
    char name[50];
    char gender[1];
    int age;
    int roll[7];
};

int main(void){
    bool term=true;
    while (term) {
        decision();
    }
}

void decision() {
    int dec;
    printf("Select one of the options below:\n1.Add a Student\n2.Delete a Student\n3.Import details of student\n4.To terminate Session\nSelect by typing number only:");
    scanf("%d",&dec);
    switch(dec) {
        case 1:
            add_student();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            exit(0);
    }
}

void add_student() {
    struct student s;
    fopen("student.txt","a");
    printf("Enter student name:");
    scanf("%s",s.name);
    printf("Enter student age:");
    scanf("%d",s.age);
    printf("Enter student gender:");
    scanf("%s",s.gender);
    printf("Enter student roll number:");
    scanf("%d",s.roll);
    fwrite(&s,sizeof(s),1,stdout);
}