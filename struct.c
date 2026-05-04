#include <stdio.h>
struct Student{////DECALARATION OF STRUCTURE
    char name[50];
    int age;
    int rollno;
};
int main(){
    struct Student s1 = {"Vignesha",24,100};////ASSIGNING VALUES IN THE STRUCTURE
    struct Student s2 = {"Varun",23,101};
    printf("%s ",s1.name);////ACCESSING STRUCTURE VALUES
    printf("%d ",s1.age);
}

#include <stdio.h>
struct Student{////DECALARATION OF STRUCTURE
    char name[50];
    int age;
    int rollno;
};
int main(){
    struct Student s[5];
    for(int i= 0;i < 5;i++){
        scanf("%s %d %d",&s[i].name, &s[i].age, &s[i].rollno);
    }
    for(int i = 0;i < 5;i++){
        printf("\n%s %d %d",s[i].name,s[i].age,s[i].rollno);
    }
}

//1) GET THE DETAILS OF 5 EMPLOYEES AND FIND OUT WHO HAS THE HIGHEST SALARY
#include <stdio.h>
struct Employee{
    char name[50];
    long int salary;
};
int main(){
    struct Employee e[3];
    for(int i = 0;i < 3;i++){
        scanf("%s %ld",&e[i].name, &e[i].salary);
    }
    int max = e[0].salary;
    for(int i = 0;i < 3;i++){
        if(e[i].salary > max){
            max = e[i].salary;
        }
    }
    for(int i = 0;i < 3;i++){
        if(max == e[i].salary){
            printf("Employee %s has the highest salary = %ld",e[i].name,e[i].salary);
        }
    }
}

//2) STORE THE LIST OF STUDENTS DETAILS FROM USER AND PRINT THE STUDENT NAME WHO HAVE FAILED THE EXAM
#include <stdio.h>
struct student{
    char name[50];
    char grade;
};
int main(){
    struct student s[3];
    for(int i = 0;i < 3;i++){
        scanf("%s %c",&s[i].name, &s[i].grade);
    }
    for(int i = 0;i < 3;i++){
        if(s[i].grade == 'F'){
            printf("Student %s has Grade %c\n",s[i].name,s[i].grade);
        }
    }
}


////3) PRINT THE LIST OF STUDENT DETAILS WHO HAVE ABOVE CGPA OF 8.5
#include <stdio.h>
struct student{
    char name[50];
    float CGPA;
};
int main(){
    struct student s[3];
    for(int i = 0;i < 3;i++){
        scanf("%s %f",&s[i].name, &s[i].CGPA);
    }
for(int i = 0;i < 3;i++){
        if(s[i].CGPA >= 8.5){
            printf("Student %s has CGPA %.2f\n",s[i].name,s[i].CGPA);
        }
    }
}