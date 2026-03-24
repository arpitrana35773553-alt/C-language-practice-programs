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

7) find out the product of digits of an prime element of the array.
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