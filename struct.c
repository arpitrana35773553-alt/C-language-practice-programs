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

