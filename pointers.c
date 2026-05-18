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

//QUESTION 3
//3) Find out the sum of digits of a number using pointer
#include <stdio.h>
int main(){
    int a;
    printf("Enter the the number: ");
    scanf("%d",&a);
    int *p = &a;
    int sum = 0;
    while(*p > 0){
        int digit = (*p) % 10;
        sum += digit;
        *p = *p / 10;
    }
    printf("%d",sum);
}


////QUESTION 4
//4) print the list of even digits of a number using pointer 
#include <stdio.h>
int main(){
    int a;
    printf("Enter the the number: ");
    scanf("%d",&a);
    int *p = &a;
    while(*p > 0){
        int digit = (*p) % 10;
        if(digit % 2 == 0){
            printf("%d  ",digit);
        }
        *p = *p / 10;
    }
}


//QUESTION 5
//5) Swap two numbers using pointer in the function
#include <stdio.h>
void swap(int *a , int *b){
     int temp = *a;
     *a = *b;
     *b = temp;

}
int main(){
    int a, b;
    printf("Enter the numbers: ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("a = %d & b = %d",a , b);
}

////1) Print the list of elements from array which is providing the sum of digits even.
#include <stdio.h>
int isEven(int m){
    int sum = 0;
    while(m > 0){
       int digit = m % 10;
       sum += digit;
       m = m / 10; 
    }
    if(sum % 2 == 0){
        return 1;
    }else{
        return 0;
    }
    } 
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    int *p = arr;
    for(int i = 0;i < n;i++){
        if(isEven(*(p + i)) == 1){
            printf("%d  ",*(p + i));
        }
    }
}

////2) Print the list of elements which is providing the product of digits more than 50.
#include <stdio.h>
int isGreater(int m){
    int product = 1;
    while(m > 0){
       int digit = m % 10;
       product *= digit;
       m = m / 10; 
    }
    if(product > 50){
        return 1;
    }else{
        return 0;
    }
    } 
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    int *p = arr;
    for(int i = 0;i < n;i++){
        if(isGreater(*(p + i)) == 1){
            printf("%d  has product of digits greater than 50\n",*(p + i));
        }
    }
    return 0;
}

////3) Print the list of elements from the array which is providing the sum of digits is prime.
#include <stdio.h>
int isPrime(int n){
    int temp = 0;
    for(int i = 2;i < n;i++){
        if(n == 2){
            return 1;
        }
        if(n % i == 0){
            temp = 1;
            break;
        }
    }
    if(temp == 1){
        return 0;
    }else{
        return 1;
    }
}

int primeSum(int m){
    int sum = 0;
    while(m > 0){
       int digit = m % 10;
       sum += digit;
       m = m / 10; 
    }
    if(isPrime(sum) == 1){
        return 1;
    }else{
        return 0;
    }
    } 
    
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    int *p = arr;
    for(int i = 0;i < n;i++){
        if(primeSum(*(p + i)) == 1){
            printf("%d  has sum of digits as prime\n",*(p + i));
        }
    }
    return 0;
}



///////////20-04-2026////////
////1) FIND OUT THE TOTAL DIGIT OF MEMORY ADDRESS OF a 
#include <stdio.h>
#include <stdint.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    int *p = &a;
    int digit = 0;
    uintptr_t num = (uintptr_t)p;
    printf("Memory Address is : %llu\n",(unsigned long long)p);
    while(num > 0){
        digit++;
        num = num/10;
    }
    printf("%d",digit);
}

//2) FIND OUT THE MEMORY ADDRESS OF a IS POSITIVE OR NEGATIVE
#include <stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int *p = &a;
    printf("This is the memory address: %lld\n",(long long)p);
    if(*p > 0){
        printf("Memory address is positive.");
    }else{
        printf("It is negative.");
    }
}

////3) FIND OUT THE TOTAL NUMBER OF PRIME ELEMENTS FROM ARRAY USING POINTERS
#include <stdio.h>
int isPrime(int n){
    int temp = 0;
     if(n == 1){
            return 0;
        }
    for(int i = 2;i < n;i++){
        if(n == 2){
            return 1;
        }
        if(n % i == 0){
            temp = 1;
            break;
        }
    }
    if(temp == 1){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    int total = 0;
    int *p = arr;
    for(int i = 0;i < n;i++){
        if(isPrime(*(p + i)) == 1){
            total += 1;
        }
    }
    printf("Total is: %d",total);
}


////4) REVERSE THE ARRAY USING POINTERS 
#include <stdio.h>
int main(){
    int n;
     int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
}

/////////////22-04-2026//////////
////PRINT VALUE, ADDRESS AND VALUE USING POINTER
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int *p = &n;
    printf("Address of n = %d\n",p);
    printf("Value Without using pointer is %d\n",n);
    printf("Value using the pointer is %d",*p);
}


////////NULL POINTER ////////////
////MEANS A POINTER THAT POINTS TO NOTHING 
#include <stdio.h>
int main(){
    int *p = NULL;
    printf("%d",*p);
}


//////VOID POINTER///////
////PRINT ALL VALUES OF INT, CHAR, FLOAT USING ONE VOID 
#include <stdio.h>
int main(){
    void *p;
    char a = 'A';
    int b = 7;
    float c = 7.7;
    p = &a;
    printf("%c\n",*(char*)p);
    p = &b;
    printf("%d\n",*(int*)p);
    p = &c;
    printf("%.1f",*(float*)p);
}

/////////POINTER AIRTMETIC//////////
////PRINT AN ARRAY USING POINTER ONLY
#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the array: \n");
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    int *p = arr;
    for(int i = 0;i < n;i++){
        printf("%d ",*(p+i));
    }
}

////PRINT THE VALUES FROM 1 TO 10 USING POINTERS 
#include <stdio.h>
int main(){
    int arr[] = {1,4,8,12,16};
    int *p = arr;
    int n = 10;
    for(int i = 0;i < n;i++){
        printf("%d ",*p + i);
    }
}

////FIND THE LARGEST ELEMENT USING POINTER IN AN ARRAY
#include <stdio.h>
int main(){
    int arr[] = {1,3,7,5,9,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int *p = arr;
    int largest = *p;
    for(int i = 0;i < n;i++){
        if(largest < *(p + i)){
            largest = *(p + i);
        }
    }
    printf("Largest Element is : %d",largest);
}

///////DYNAMIC MEMORY ALLOCATION////////
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p;
    p = (int*)malloc(5*sizeof(int));
    p = (int*)realloc(p,10*sizeof(int));
    printf("Enter the elements: ");
    for(int i = 0;i < 10;i++){
        scanf("%d",&p[i]);
    }
    for(int i = 0;i < 10;i++){
        printf("%d ",p[i]);
    }
}

////////////CALLOC/////////
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p = (int*)calloc(5,sizeof(int));
    p = (int*)realloc(p,10*sizeof(int));
    printf("Enter the elements: ");
    for(int i = 0;i < 10;i++){
        scanf("%d",&p[i]);
    }
    for(int i = 0;i < 10;i++){
        printf("%d ",p[i]);
    }
}

////REVERSE THE ARRAY USING POINTERS
#include <stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int *p = arr;
    int *q = arr + n - 1;
    int temp = 0;
    printf("%d",2[arr]);
    while(*p < *q){
        temp = *p;
        *p = *q;
        *q = temp;
        *(p++);
        *(q--);
    }
    for(int i = 0;i < n;i++){
        printf("%d ",arr[i]);
    }
}

#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    scanf("%d", &x);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((arr[j] % x) > (arr[j + 1] % x)) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) printf(" ");
    }

    free(arr);
    return 0;
}

#include <stdio.h>
int main() {
    int a, b;
    int *p1 = &a;
    int *p2 = &b;
    scanf("%d %d", p1, p2);
    int result = (*p1) % (*p2);
    printf("%d %% %d = %d", *p1, *p2, result);
    return 0;
}

#include<stdio.h>

int main()
{
    int arr[5];
    int *p1 = &arr[0];
    int *p2 = &arr[3];
    printf("%d", p2-p1);
    return 0;
}

#include<stdio.h>
int main()
{
    int *p;
    *p = 10;
    printf("%d",*p);
    return 0;
}