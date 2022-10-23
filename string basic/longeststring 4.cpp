#include<stdio.h>
#include<string.h>
int main(){
    char in[100]={0};
    char save[100]={0};
    gets(in);

    strcpy(save,in);
    int max = strlen(in);

    while(1){
        gets(in);
        int len = strlen(in);
        if(len == 0){
            break;
        }
        else if(len >= max){
            strcpy(save,in);
        }
    }
    printf("%s", save);
    return 0;
}
