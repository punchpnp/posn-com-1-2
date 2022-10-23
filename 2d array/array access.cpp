#include<cstdio>
int x[101][1000];
int main(){
    int k;
    scanf("%d", &k);
    int i, j, c;
    int array[k];

    for(i = 1; i <= k; i++){
        scanf("%d", &array[i]); // lenght
        for(j = 0; j < array[i]; j++){
            scanf("%d", &x[i][j]);
        }
    }
    int countF = 0;
    int pass = 0;
    int sum = 0;
    int check = 0;
    int max = 0;
    int min = 0;
    int a, b;
    for(i = 0; ; i++){
        scanf("%d", &a);
        if(a == 0)
            break;
        scanf("%d", &b);

        for(j = 1; j <= k; j++){ // k = 1 2 3
            if(a > k){
                countF++;
                break;
            }

            else if(a == j){ // a = 1 , j = 1
                for(c = 0; c < array[j]; c++){
                    if(b >= array[j]){
                        countF++;
                        break;
                    }
                    if(b == c){
                        sum = sum + x[j][c];
                        if(check == 0){
                            max = x[j][c];
                            min = x[j][c];
                            check = 1;
                        }
                        else if(x[j][c] > max)
                            max = x[j][c];
                        else if(x[j][c] < min)
                            min = x[j][c];
                    }
                }
            }
        }
    }
    printf("%d\n", sum);
    printf("%d\n", max);
    printf("%d\n", min);
    printf("%d", countF);
    return 0;
}
