#include<cstdio>
int main(){
    int n;
    scanf("%d", &n);
    int x[n];
    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &x[i]);
    }
    int sum = 0;
    int min, max;
    int check = 0;
    if(n == 3){
        for(i = 0; i < n; i++){
            sum = sum + x[i];
        }
    }
    else{ // n > 3
        for(i = 0; i < n; i++){
            sum = sum + x[i];
            if(check == 0){
                min = x[i];
                max = x[i];
                check = 1;
            }
            else if(x[i] > max)
                max = x[i];
            else if(x[i] < min)
                min = x[i];
        }
    }
    if(n == 3)
        printf("%d", sum);
    else
        printf("%d", sum - max - min);
    return 0;
}
