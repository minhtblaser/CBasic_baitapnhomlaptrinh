#include<stdio.h>

void enter(Datetime &current);
void enter(Student &input);
void enter(Students &input);
void enter (Student &input){
    fflush(stdin);
    printf("\nenter name: ");
    gets(input.name);
    printf("\nenter date of birth: ");
    enter(input.date_of_birth);
    printf("\nenter GPA: ");
    scanf("%f", &input.gpa);
}
void enter(Students &input){
    printf("\namount of students: ");
    scanf("%d", &input.amount);
    printf("\nenter list of students: ");
    for(int position = 0; position < input.amount; position++){
        enter(input.students[position]);
    }
}
void enter(Datetime &date){
    do{
        printf("\n enter day: ");
        scanf("%d", &date.day);
        printf("\n enter month: ");
        scanf("%d", &date.month);
        printf("\n enter year: ");
        scanf("%d", &date.year);
        if(!isValid(date)){
            printf("enter again please!! ");
        }
    } while (!isValid(date));
}