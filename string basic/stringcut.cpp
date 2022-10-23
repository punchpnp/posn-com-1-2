#include<cstdio>
#include<cstring>
int main(){
    char x[1000000];
    scanf("%[^\n] ", x);
    char k;
    scanf("%c", &k);
    int len = strlen(x);
    int i;

   // printf("%c\n", k);

    // check no output
    int c = 0;
    for(i = 0; i < len; i++){
        if(x[i] == k)
            c++;
    }
    if(c == len)
        printf("no output");
    else if(c == 0)
        printf("no target character found");
    else{
        for(i = 0; i < len; i++){
        if(x[i] != k){
            printf("%c", x[i]);
        }
        else
            if(x[i] == x[i+1])
                continue;
            else
                printf("\n");
        }
    }

    return 0;
}
