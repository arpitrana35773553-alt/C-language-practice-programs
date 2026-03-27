//1) find out the sum of all elements from the array.
#include <stdio.h>
int main(){
    int n;
    printf("Type the number of elements");
    scanf("%d",&n);
    int arr[n];
    int sum = 0;
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d",sum);
}

//2) find out the product of even elements from the array.
#include <stdio.h>
int main(){
    int n;
    printf("Type the number of elements");
    scanf("%d",&n);
    int arr[n];
    int producteven = 1;
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =0;i<n;i++){
        if(arr[i]%2==0){
        producteven*=arr[i];
        }
    }
    printf("%d",producteven);
}

//3) print the list of sum of digits of the element from the array.
int digit(int n){
    int sum = 0;
    while(n>0){
        int digit = n%10;
        sum+=digit;
        n=n/10;
    }
    return sum;
}

#include <stdio.h>
int main(){
    int n;
    printf("Type the number of elements");
    scanf("%d",&n);
    int arr[n];
    int sum = 0;
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<n;i++){
        printf("%d\n",digit(arr[i]));
    }
}


// 4) find out the sum of prime elements from the array.
#include <stdio.h>

int prime(int n){
    int temp = 0;
    int original = n;
    int no = 0;
    for(int i = 2;i<n;i++){
        if(n%i==0){
            temp = 1;
        }
        if(temp == 0){
            return original;
        }else{
            return no;
        }
    }
}
int main(){
    int n;
    printf("Type the number of elements");
    scanf("%d",&n);
    int arr[n];
    int sum = 0;
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<n;i++){
        sum+=prime(arr[i]);
    }
    printf("%d",sum);
}

//5) print the list of names which start with vowels.
#include <stdio.h>
int main(){
    int n;
    printf("Type the number of elements : ");
    scanf("%d",&n);
    char arr[n][20];
    int sum = 0;
    for(int i = 0;i<n;i++){
             scanf("%s",&arr[i]);
       }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<1;j++){
        if(arr[i][j]==('a')||arr[i][j]==('e')||arr[i][j]==('i')||arr[i][j]==('o')||arr[i][j]==('u')){
            printf("%s\n",arr[i]);
        }else{
            continue;
        }
        }
    }
    
}


//6) print the list of names which have an even count.
#include <stdio.h>
#include <string.h>
int main(){
    int n;
    printf("Type the number of elements : ");
    scanf("%d",&n);
    char arr[n][20];
    int sum = 0;
    for(int i = 0;i<n;i++){
             scanf("%s",&arr[i]);
       }
    for(int i = 0;i<n;i++){
        if(strlen(arr[i])%2==0){
            printf("%s\n",arr[i]);
        }
    }
}

////7) find out the product of digits of an prime element of the array.
#include <stdio.h>

int prime(int n){
    int temp = 0;
    int original = n;
    int no = 0;
    for(int i = 2;i<n;i++){
        if(n==2){
            return n;
        }
        if(n%i==0){
            temp = 1;
        }
        if(temp == 0){
            return original;
        }else{
            return no;
        }
    }
}

int digit(int n){
    int product = 1;
    while(n>0){
        int digit = n%10;
        product*=digit;
        n=n/10;
    }
    return product;
}

int main(){
    int n;
    printf("Type the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    int product1 = 1;
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<n;i++){
        if(prime(arr[i])==arr[i]){
            printf("%d\n",digit(arr[i]));
        }else{
           continue;
        }
    }
    
}

#include <stdio.h>

int prime(int n){
    int temp = 0;
    int original = n;
    int no = 0;
    for(int i = 2;i<n;i++){
        if(n==2){
            return n;
        }
        if(n%i==0){
            temp = 1;
        }
        if(temp == 0){
            return original;
        }else{
            return no;
        }
    }
}
int main(){
    int n =21;
    printf("%d",prime(n));
}



////2) find out the largest string from the array. 
#include <stdio.h>
#include <string.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    char arr[n] [20];
    printf("Enter the elements: ");
    for(int i = 0;i < n;i++){
        scanf("%s",&arr[i]);
    }
    int idx = 0;
    int max = 0;
    for(int i = 0;i < n;i++){
        if(strlen(arr[i])>max){
            max = strlen(arr[i]);
            idx = i;
        }
    }
    printf("%s",arr[idx]);
}

///////////27-03-2026//////////////
//CALCULATE THE SUM OF ALL NUMBERS
#include <stdio.h>
int main(){
    char arr[] = {'8','7','5','2','9'};
    int sum = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0;i < n;i++){
        int digit = (int)arr[i] - 48;
        sum += digit;
    }
    printf("%d",sum);
}

////CALCULATE THE SUM OF EACH DIGIT OF A NUMBER SEPARATELY
#include <stdio.h>
int main(){
    char arr[][3] = {"67","78","24","53","11"};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0;i < n;i++){
        char f = arr[i][0];
        char s = arr[i][1];
        int first = (int)f - 48;
        int second = (int)s -48;
        printf("%s : %d\n",arr[i],first+second);
    }
}

/////CALCULATE THE SUM OF EACH DIGIT OF A NUMBER SEPARATELY
#include <stdio.h>
int main(){
    int arr[] = {678,56,12,34,90,102,45};
    int n = sizeof(arr) / sizeof(int);
    for(int i = 0;i < n;i++){
        int sum = 0;
        int original = arr[i];
        while(arr[i] > 0){
            int digit = arr[i] % 10;
            sum += digit;
            arr[i] = arr[i] / 10;
        }
        printf("%d : %d\n",original,sum);
    } 
}

////PASSING ARRAY TO FUNCTION
#include <stdio.h>
void sum(int arr[],int n){
    for(int i = 0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}

int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int n = sizeof(arr) / sizeof(arr[0]);
    sum(arr,n);
}

////PRINT OUT ONLY THE EVEN DIGITS OF AN ARRAY
#include <stdio.h>
void even(char arr[][20], int n){
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n-1;j++){
            char f = arr[i][j];
            int digit = (int)f - 48;
            if(digit%2 == 0){
                printf("%d"" ",digit);
            }
        }
        printf("\n");
    }
}


int main(){
    char arr[][20] = {"6789","1234","2468","1357","5678"};
    int n = sizeof(arr) / sizeof(arr[0]);
    even(arr , n);
}

