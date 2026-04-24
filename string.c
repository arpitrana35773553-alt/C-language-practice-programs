////COUNT THE LENGTH OF STRING WITHOUT USING STRING FUNCTION
#include <stdio.h>
#include <string.h>
int main(){
    char name[] = "Doraemon";//DECALARATION & INITIALISATION
    char name2[50];
    scanf("%s",&name2);//gets(name)
    printf("%s\n",name);//puts(name)
    int n = strlen(name);
    for(int i = 0 ;i < n;i++){//processing of string
        printf("%c ",name[i]);
    }
    ////CHARACTER AIRTHMETIC
    char names[] = "vignesha123";
    for(int i = 0;i < n;i++){
        if(names[i] >= 97 && names[i] <= 122){
            printf("%c",names[i]);
        }
    }
}