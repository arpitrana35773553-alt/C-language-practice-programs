#include <stdio.h>
#include <stdbool.h>
// void prime(int b){
//     for(int i=2;i<b;i++){
//         if(b%i==0){
//             printf("Not prime");
//             break;
//         }else 
//         printf("Prime");
//         break;
//     }
// }
// int main(){
//     int a ;
//     scanf("%d",&a);
//     prime(a);
// }


// 222222222222222222222222

// void even(){
//     int sum = 0;
//     for(int i=1;i<=50;i++){
//         if(i%2==0){
//             sum = sum+i;
//         }else 
//         continue;
//     }
//     printf("%d",sum);
// }
// int main(){
//     even();
// }

// 3333333333333333333333333333

// void odd(){
//     int sum = 0;
//     for(int i=1;i<=20;i++){
//         if(i%2==0){
//             continue;
//         }else 
//         sum = sum+i;
//     }
//     printf("%d",sum);
// }
// int main(){
//     odd();
// }


// 444444444444444444444444444444444
// void prime(){
//     for(int i=1;i<=20;i++){
//         for(int j =2;j<i;j++){
//         if(i%j==0){
//             break;
//         }else 
//         printf("%d\t",i);
//     }
//     }
// }
// int main(){
//     prime();
// }

// void factorial(){
//    int a ;
//    scanf("%d",&a);
//    int product = 1;
//    for(int i = 1;i<=a;i++){
//         product = product*i;
//    }
//    printf("%d",product);
// }

// int main(){
//     factorial();
// }



////////////////////////FIBONACCI////////////////////////
// void fibonacci(int n){
//   int f=0,s=1,sum;
//    printf("%d %d ",f,s);
//   for(int i = 0;i<=n-2;i++){
//     sum = f+s;
//     f=s;
//     s=sum;
//     printf("%d ",sum);

//   }
// }

// int main(){
//     fibonacci(10);
// }



// void names(int n){
//   printf("Arpit\n");
//   n--;
//   if(n<1){
//     return;
//   }
//   names(n);
// }
// int main(){
//   names(10);
// }

// void numbers(int n){
//   printf("%d\n",n);
//   n++;
//   if(n>10)
//     return;
//   numbers(n);
// }

// int main(){
//   numbers(1);
// }

////////////////////////////
// int numbers(int n,int sum){
//   if(n%2==0)
//     sum+=n;
//   n++;
//   if(n==41){
//     return sum;
//   }
//   numbers(n,sum);
// }

// int main(){
//   int sum = 0;
//   printf("%d",numbers(21,0));
//   return 0;
// }

// void isPrime(int n,int i){
//   int temp = 0;
//   if(n%i==0)
//   printf("not prime");
//   return ;
//   if(n%i!=0)
//   isPrime(n,i+1);
//   if(i==n-1)
//   printf("prime");
//   return ;
// }
// int main(){
//   isPrime(17,2);
// }



///////////////////////2/////////////////////

// int sum(int n,int sum4){
//   if(n%2!=0)
//   sum4+=n;
//   if(n==50)
//   return sum4;
//   sum(n+1,sum4);
// }

// int main(){
//   printf("%d",sum(1,0));
// }


// #include <stdio.h>
// int sum(int n,int sum4){
//   if(n%2!=0)
//   sum4+=n;
//   if(n==50)
//   return sum4;
//   sum(n+1,sum4);
// }

// int main(){
//   printf("%d",sum(1,0));
// }

// ///////////////////6

// int pro(int n, int pro1){
//     if(n > 20)
//         return pro1;
//     if(n % 2 != 0)
//         pro1 *= n;
//     return pro(n + 1, pro1);
// }
// int main(){
//     printf("%d", pro(1, 1));
// }

// int sum2(int n , int s){
//     s+=n%10;
//     if(n==0)
//     return s;
//     sum2(n/10,s);
// }

// int main(){
//     printf("%d",sum2(1234,0));
// }


// ////////////////STATIC/////////////////
// void stat(){
//   static int a = 0;
//   a++;
//   printf("%d\n",a);
// }

// int main(){
//   stat();
//   stat();
//   stat();
// }


// /////////////////EXTERN////////////////
// int a = 10;
// void func(){
//   extern int a;
//   printf("%d",a); 
// }

// int main(){
//   func();
// }


// ////////////////// register//////////////////
// int main(){
//   register int x;
//   for(int x = 0;x<5;x++){
//     printf("%d\t",x);
//   }
// }

 