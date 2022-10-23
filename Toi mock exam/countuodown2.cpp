#include<cstdio>
int main(){
    int n;
    scanf("%d", &n);
    int x[n];
    int i, j;
    int check = 0;
    for(i = 0; i < n; i++){
        scanf("%d", &x[i]);
    }
    for(i = 0; i < n-1; i++){
        for(j = 0; j < x[i+1]; j++){
            if(i == 0 && check == 0){ // case i == 0
                if(x[i] - 1 > 10){
                    printf("1 2 3 . . . ");
                    printf("%d %d %d", x[i]-2, x[i]-1, x[i]);
                    check = 1;
                    printf("\n");

                    //i--;
                    //break;
                }
                else{
                    printf("%d ", j+1);
                    if(j+1 != x[i])
                        continue;
                }
                if(x[i]-j == 1){
                    check = 1;
                    printf("\n");
                    //i--;
                }
            }
            //else{
                if(x[i] < x[i+1]){ // up
                    if(x[i+1] - x[i] > 10){
                        printf("%d %d %d . . . ", x[i], x[i]+1, x[i]+2);
                        printf("%d %d %d", x[i+1]-2, x[i+1]-1, x[i+1]);
                        break;
                    }
                    else{
                        printf("%d ", x[i]+j);
                        if(x[i]+j == x[i+1])
                            break;
                    }

                }
                else{ // down
                    if(x[i] - x[i+1] > 10){
                        printf("%d %d %d . . . ", x[i], x[i]-1, x[i]-2);
                        printf("%d %d %d", x[i+1]+2, x[i+1]+1, x[i+1]);
                        break;
                    }
                    else{
                        printf("%d ", x[i]-j);
                        if(x[i]-j == x[i+1])
                            break;
                    }
                }
           // }
        }
        printf("\n");
    }
    return 0;
}
