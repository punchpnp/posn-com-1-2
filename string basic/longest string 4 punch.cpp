#include<cstdio>
#include<cstring>
char x[1000];
char array[1000];
char y[1000];
int main(){
    gets(x);
    int len1 = strlen(x);
    int max = len1;
    int i, j;

    for(i = 0; i < len1; i++){
        array[i] = x[i];
    }

    for(i = 0; ; i++){
        gets(y);
        int len2 = strlen(y);
        if(len2 == 0)
            break;
        if(len2 >= max){
            max = len2;
            for(j = 0; j < max; j++){
                array[j] = y[j];
            }
        }
    }
    for(i = 0; i < max; i++){
        printf("%c", array[i]);
    }
    return 0;
}
