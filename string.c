/////////STRING'S BASICS////////
#include <stdio.h>
#include <string.h>
int main(){
    char name[] = "Doraemon";//DECALARATION & INITIALISATION
    char name2[50];
    scanf("%s\n",&name2);//gets(name)
    printf("%s",name2);
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

//////////fgets()///////////
#include <stdio.h>
#include <string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    printf("%s",str);
}

/////////FIND THE STRING LENGTH WITHOUT strlen
#include <stdio.h>
int main(){
    char str[50] = "Doraemon1023";
    int count = 0;
    for(int i = 0;str[i] != 0;i++){
        count++;
    }
    printf("%d",count);
}


