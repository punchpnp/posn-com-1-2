#include<cstdio>
int main(){
    int x[10000];
    int i, j;
    int count = 0;
    for(i = 1; ; i++){
        scanf("%d", &x[i]);
        if(x[i] <= 0)
            break;
        count++;
    }
    for(i = 1; i <= count; i++){
        for(j = 1; j <= x[i]; j++){
            if(j == x[i]){
                x[i] = x[i] % 10;
                printf("%d", x[i]);
            }
            else if(j % 5 == 0)
                printf("X");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
