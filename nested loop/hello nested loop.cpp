#include<cstdio>
int main(){
    int r, c;
    scanf("%d %d", &r, &c);
    int i, j;
    for(i = 0; i <= r; i++){
        for(j = 0; j <= c; j++){
            printf("(%d, %d) ", i, j);
        }
        printf("\n");
    }
    return 0;
}
