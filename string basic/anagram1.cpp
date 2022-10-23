#include<cstdio>
#include<cstring>
int main(){
    char x[10000];
    scanf("%s", x);
    int count[8+1] = {};
    int len = strlen(x);
    int i;
    for(i = 0; i < len; i++){
        count[x[i] - 65]++;
    }
    for(i = 0; i < 8; i++){
        printf("%d ", count[i]);
    }
    return 0;
}
