#include <stdio.h>
#include <string.h>

struct person_name {
     char first[20];
     char middle_initial;
     char last[20];
};

struct student {
     struct person_name name;
     int id, age;
     char sex;
} student1, student2;

void display_name(struct person_name p){
     printf("%s %s", p.first, p.last);
}

int main(void){
     strcpy(student1.name.first, "fred");
     strcpy(student1.name.last, "allison");

     display_name(student1.name);
}