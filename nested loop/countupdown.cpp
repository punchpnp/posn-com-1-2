#include<cstdio>
int main(){
    int n;
    scanf("%d", &n);
    int x[n];
    int i, j;
    int check = 0;
    for(i = 1; i <= n ; i++){
        scanf("%d", &x[i]);
    }
    for(i = 1; i <= n; i++){ //x[1] = 7 // x[2] = 15
        for(j = 1; j <= x[i]; j++){
            if(i == 1 && x[i] - 1 <= 10)
                printf("%d ", j);
            else if(i == 1 && x[i] - 1 > 10){
                printf("1 . . . %d", x[i]);
                break;
            }
            else if(x[i] - x[i-1] <= 10 && x[i] - x[i-1] >= 0){ // x[2] - x[1] =8
                if(check == 0){
                    j = x[i-1];
                    check = 1;
                }
                printf("%d ", j);
            }
            else if(x[i] - x[i-1] > 10){
                printf("%d . . . %d", x[i-1], x[i]);
                break;
            }
            else if(x[i] < x[i-1]){
                if(x[i-1] - x[i] > 10){
                    printf("%d . . . %d", x[i-1], x[i]);
                    break;
                }
                else if(check == 0){
                    j = x[i-1] * (-1);
                    check = 1;
                }
                printf("%d ", j*(-1));
                if(j == x[i]* (-1)){
                    check = 0;
                    break;
                }
            }
            if(j == x[i])
                check = 0;
        }
        printf("\n");
    }
    return 0;
}
