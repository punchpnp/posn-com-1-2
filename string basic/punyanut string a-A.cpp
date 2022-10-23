#include<cstdio>
#include<cstring>
int main(){
    char x[100000];

    //scanf("%s", x);
    gets(x);

    int len = strlen(x);
    int i;
    for(i = 0; i < len; i++){
        if(x[i] >= 'a' && x[i] <= 'z')
            printf("%c", x[i]-32);
        else
            printf("%c", x[i]);

    }
    return 0;
}
