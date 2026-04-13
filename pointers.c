///////////////POINTERS////////////

#include <stdio.h>
int main(){
    int a = 10;
    int *p = &a;
    for(int i = 0;i < 20;i++){
        printf("%d ",*p+i);
    }
}

#include <stdio.h>
int main(){
    int a = 1;
    int *p = &a;
    (*p)++;
    printf("%d ",*p);
    printf("%d ",a);
    printf("%d ",&a);
    printf("%d ",++(*p));
}


//QUESTION 1
//1) Check the number is prime number or not using pointer
#include <stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    int *p = &a;
    int temp = 0;
    for(int i = 2;i < a;i++){
        if(*p == 2){
            temp = 1;
            break;
        }
        if(*p % i == 0){
            temp = 1;
            break;
        }
    }
    if(temp == 0){
        printf("Prime Number");
    }else{
        printf("Non Prime");
    }
}


//QUESTION 2
//2) Find out the sum of 1 to 10 number using pointer
#include <stdio.h>
int main(){
    int a = 1;
    int sum = 0;
    int *p = &a;
    for(int i = 0;i < 10;i++){
        sum += *p + i;
    }
    printf("%d",sum);
}


