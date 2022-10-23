#include<cstdio>
int main(){
    int R, C; // column
    scanf("%d %d", &R, &C);

    int x[401][401] = {};
    int i, j;

    int P, Q;
    scanf("%d %d", &P, &Q);
    int H, W;
    scanf("%d %d", &H, &W);

    int count = 0;
    for(i = 0+P; i < H+P; i++){ // H+P = 2+2-1 = 3
        for(j = 0+Q; j < W+Q; j++){ // W+Q = 1+4-1 = 4
            x[i][j] = 1;
            if(i <= R && j <= C && i >= 1 && j >= 1)
                count++;
        }
    }
    //printf("%d\n", count);
    if(count == H*W){
        for(i = 1; i <= R; i++){
            for(j = 1; j <= C; j++){
                printf("%d ", x[i][j]);
            }
        printf("\n");
        }
    }
    else
        printf("invalid input");
    return 0;
}
    /*
    1. all is 0
    2. for i j new make key = 1
    */
