#include <stdio.h>
void fibonacci(int n){
  int f=0,s=1,sum;
   printf("%d %d ",f,s);
  for(int i = 0;i<=n-2;i++){
    sum = f+s;
    f=s;
    s=sum;
    printf("%d ",sum);

  }
}

int main(){
    fibonacci(10);
}