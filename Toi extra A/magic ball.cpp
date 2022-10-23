#include<cstdio>
int main(){
    int rock, n;
    scanf("%d %d", &rock, &n);
    int i, j;
    int rockmirror[rock] = {};
    for(i = 0; i < rock; i++){
        printf("%d ", rockmirror[i]);
    }
    // input && check
    int x;
    for(j = 0; j < n*2; j++){
        scanf("%d", &x);
        if(j % 2 == 0)
            rockmirror[x-1] = 1;
        else
            rockmirror[x-1] = 2;
        for(i = 0; i < rock; i++){
            printf("%d ", rockmirror[i]);
        }
    }

    return 0;
}
