#include <stdio.h>
union Student{
    int age;
    float cgpa;
    int roll;
};
int main(){
    union Student s;
    s.age = 24;
    printf("%d\n",s.age);
    s.cgpa = 8.5;
    printf("%d",s.age);
}

1) Form the list of employee details using structures print the employee name and the salary whose name having more than 10 letters.
#include <stdio.h>
#include <string.h>
struct Employees{
    char name[50];
    float salary;
};
int main(){
    struct Employees e[4];
    for(int i = 0;i < 4;i++){
        scanf("%s %f",&e[i].name, &e[i].salary);
    }
    for(int i = 0;i < 4;i++){
        if(strlen(e[i].name) > 10){
            printf("%s %f",e[i].name,e[i].salary);
        }
    }
}    

//2) Print the list of student details who have the eligibility to vote.
#include <stdio.h>
#include <string.h>
struct Student{
    char name[50];
    int age;
};
int main(){
    struct Student s[4];
    for(int i = 0;i < 4;i++){
        scanf("%s %d",&s[i].name, &s[i].age);
    }
    for(int i = 0;i < 4;i++){
        if(s[i].age > 18){
            printf("%s %d\n",s[i].name,s[i].age);
        }
    }
}   


