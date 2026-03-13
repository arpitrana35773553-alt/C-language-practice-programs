#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    (num%2==0)?printf("Even"):printf("Odd");
    return 0;
}


int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    (a<0)?printf("%d",(a*(-1))):printf("%d",a);
}


int main(){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int max  = (a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("%d",max);
}

int main(){
    int marks;
    printf("Enter The Marks Obtained: ");
    scanf("%d", &marks);
    printf("Your Grade is: ");
    (marks>=90)?printf("A"):
(marks>=75)?printf("B"):
(marks>=60)?printf("C"):
(marks>=40)?printf("D"):printf("F");
return 0;
}

int main(){
    int y;
    printf("Enter the year: ");
    scanf("%d",&y);
    (y%400==0)?printf("Century Leap Year"):
    (y%4==0&&y%100!=0?printf("Normal Leap Year"):printf("Not a leap year"));
}


int main(){
    char name[20];
    printf("Enter the name: ");
    fgets(name, sizeof(name),stdin);
    printf("Hello");
    puts(name);
}

int main(){
    char age [20];
    printf("Enter the age: ");
    fgets(age, sizeof(age),stdin);
    puts(age);
}

int main(){
    int n = 1;
    start:
    printf("%d",n);
    n++;
    if(n<=5)
    goto start;
    return 0;
}


int main(){
    int day;
    scanf("%d",&day);
    switch(day){
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("tuesday");
        break;
    }
}


int main(){
    int num , digit,reverse=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num>0){
        digit = num%10;
        reverse = reverse*10+digit;
        num=num/10;
    }
    printf("%d",reverse);
}

int main(){
    int a =3577;
    int digit=a%100;
    printf("%d",digit);
}


////PRIME NUMBER CHECK
int main(){
    int n ;
    scanf("%d",&n);
    int temp = 0;
    for(int i = 2;i<n;i++){
        if(n%i==0){
        temp=1;
        break;
        }
    }
    if(temp==0){
        printf("Prime Number");
    }else 
    printf("Not a Prime Number");
}

////PRINT ALL PRIME NUMBERRS FROM 21 TO 50
int main(){
    int n = 50;
    for(int i = 21;i<=n;i++){
        if(i%2==0||i%3==0||i%5==0||i%7==0){
            continue;
        }else{
            printf("%d ",i);
        }
    }
}

////COUNT THE TOTAL NUMBER OF PRIME NUMBERS FROM 11 TO 48;
 int main(){
    int n = 40;
    int num = 0;
    for(int i = 11;i<=n;i++){
        if(i%2==0||i%3==0||i%5==0||i%7==0){
            continue;
        }else{
            num++;
        }
    }printf("%d",num);
}

////FIND THE SUM OF PRIME NO.'S FROM 21 TO 40
int main(){
    int n = 40;
    int sum = 0;
    for(int i = 21;i<=n;i++){
        if(i%2==0||i%3==0||i%5==0||i%7==0){
            continue;
        }else{
            sum = sum+i;
        }
    }printf("%d",sum);
}


////FIND THE PRODUCT OF PRIME NUMBERS FROM 1 TO 10.
int main(){
    int n =10;
    int temp = 1;
    for(int i = 2;i<n;i++){
        if(n%i==0){;
        continue;
        }else{
            temp = temp*n;
        }
    }printf("%d", n);
}



////FIND THE PRIME NUMBER WHICH IS NEXT TO N.(not completed yet)

int main(){
    int n ;
    scanf("%d",&n);
    n = n+1;
    int temp = 0;
    for(int i=2;i<n;i++){
       if(n%i==0){
        n++;
        continue;
       }else
       temp = i;
       printf("%d",i);
       break;
    }
}

////FIND THE NUMBER PREVIOUS TO N.
int main(){
    int n ;
    scanf("%d",&n);
    int temp = 0;
    for(int i = 2;i<n;i++){
        if(n%i==0){
        continue;
        }else
        temp = i;
    }printf("%d",temp);
}


